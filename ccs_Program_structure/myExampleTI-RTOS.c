// 1. Libraries
// SensorTagin kirjastot mukaan
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/PIN.h>

// example type
typedef usigned int UArg;
 

// myTaskStack example

#define STACKSIZE 512
char myTaskStack[STACKSIZE];

// Task execution function
void myTaskFxn(UArg arg0, UArg arg1)
{
    while (1)
    {
        System_printf(" my arguments anre %ld and %ld\n", arg0, arg1);
        System_flush();
    }
    // go to sleep for a while
    Task_sleep(1000000L/Clock_tickPeriod);// tick period of 10mcs(100khz)

}
int main()
{
    // initialze the function
    // Data structure used in the task: settings and handlers
    Task_Params myTaskParams;
    Task_Handle myTaskHandle; // task info

    // Device initialization
    Board_initGeneral();

    // Initilization of task execution parameters
    Task_Params_init(&myTaskParams);
    //Assign astack memory to the task
    myTaskParams.stackSize = STACKSIZE;
    myTaskParams.stack = &myTaskStack;
    // Provide priority to a task
    myTaskParams.priority = 2;
    //Arguments for the task(only as an ecample)
    myParams.arg0 = 127; // 1st Argument 
    myParams.arg1 = 0xFFFF; // 2nd Argument

    // creating  a task
    myTaskHandle = Task_create((Task_FunctPtr)myTaskFxn, &myTaskParams, NULL);
    if (myTaskHandle == NULL)
    {
        System_abort("Task create failled");
    }

    // Greetings to the control
    System_printf("Hello world!\n");
    System_flush();

    // Start the program 
    BIOS_start();

    return 0;
}