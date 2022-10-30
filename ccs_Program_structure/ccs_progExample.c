
// 1. Libraries
// SensorTagin kirjastot mukaan
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/PIN.h>


// main
int main(void)
{
    
    // Hox! Esimerkin alusta on jätetty ao. muuttujien esittely pois
    // 1.init HW which board?
    Board_initGeneral(); // alustetaan laite / init device
    Board_initI2C();     // alustetaan i2c-väylä käyttöön / initialize I2c

    // I/O-määritys jolla otetaan painonappi käyttöön -> config to enable a push button
    buttonHandle = PIN_open(&buttonState, buttonConfig);
    if (!buttonHandle)
    {
        System_abort("Error initializing button\n");
    }

    // Asetetaan painonapille sen tapahtuman käsittelijä (keskeytys)
    // eli tässä funktio buttonFxn
    if (PIN_registerIntCb(buttonHandle, &buttonFxn) != 0)
    {
        System_abort("Error registering button callback function");
    }

    // 2. create task // what will it do

    // Alustetaan sovellukseen yksi tehtävä, totetus taskFn-funktiossa ->
    // intialize the task that is going to run when the button is pressed.
    Task_Params_init(&taskParams);
    taskParams.stackSize = STACKSIZE;
    taskParams.stack = &taskStack;
    taskParams.priority = 2;
    task = Task_create((Task_FuncPtr)taskFxn, &taskParams, NULL);
    if (task == NULL)
    {
        System_abort("Task create failed!");
    }

    // Kerrotaan debuggerin kautta, että laitteen alustus  onnistui
    System_printf("Initialization OK!\n");
    System_flush();

    // Käynnistetään RTOS (laiteohjelmisto BIOS),
    // jolloin tehtävä lähtee suoritukseen
    // start the RTOS(Firmware BIOS).
    // which start the task execution.
    BIOS_start();

    return 0;
}