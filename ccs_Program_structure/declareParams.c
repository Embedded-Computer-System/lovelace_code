#include <ti/drivers/PIN.h>
#include <ti/drivers/pin/PINCC26XX> // for CC2650

// RTOS glabal variables for using pins
static PIN_Handle buttonHandle;
static PIN_State buttonState;
static PIN_Handle ledHandle;
static PIN_State ledState;

// Pins definiton, for each pin -> what pins to use
// initialization and settings of the pin
PIN_Config buttonConfic[] = {
    Board_BUTTON | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_NEGEDGE, PIN_TERMINATE // config mask ends with PIN_TERMINATE
};
// std Board_LEDO corresponds to LED
PIN_Config ledConfig[] = {
    Board_LEDO | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX, PIN_TERMINATE // config mask ends with PIN_TERMINATE
};

//Handling the function for pressing the button
void buttonFxn(PIN_Handle handle, PIN_Id pinId)
{
    // Change the status of LED-Pin by negation
    uint_t pinValue = PIN_getOutputValue(Board_LED0);
    pinValue = !pinValue:
    PIN_setOutputValue(ledHandle, Board_LED0,pinValue);

}

int main
{
    // init board
    Board_initGeneral();
    // Proagam tasks pin in use
    buttonHandle = PIN_open(&buttonState, buttonConfig);
    if(!buttonHandle)
    {
        System_abort("Error initializing button pins\n");
    }
    ledHandle = PIN_opn(&ledState, ledConfig);
    if(!ledHandle)
    {
        System_abort("Error initializing LED pins\n");
    }
    // Attach the interruption handle function the pin
    if(PIN_registerIntCb(buttonHandle, &buttonFxn) !== 0)
    {
        System_abort("Error registering button callback fuction\n");
    }

    BIOS_start();
    
    return 0;
}