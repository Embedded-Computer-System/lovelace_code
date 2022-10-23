#include <stdio.h>
#include <inttypes.h>

struct i2c_message
{
    uint8_t sensorRegister;
    uint8_t slaveAddress;
    char *writeBuf;
    uint8_t writeCount;
    char *readBuf;
    uint8_t readCount;
};
void print_i2c(struct i2c_message *msg);

int main()
{
    char txBuf[] = "ab";
    char rxBuf[] = "cd";

    struct i2c_message i2c;
    struct i2c_message *i2cPtr = &i2c;

    i2c.sensorRegister = 0x1;
    i2c.slaveAddress = 0x78;
    i2c.writeBuf = txBuf;
    i2c.writeCount = 2;
    i2c.readBuf = rxBuf;
    i2c.readCount = 2;

    print_i2c(i2cPtr);

    return 0;
}
void print_i2c(struct i2c_message *msg)
{
    printf("sensorRegister:0%x\n", msg->sensorRegister);
    printf("slaveAddress:%x\n", msg->slaveAddress);

    printf("writeBuf:");
    for (uint8_t i = 1; i <= 2; i++)
    {
        printf("%x", *(msg->writeBuf));
        msg->writeBuf++;
    }
    printf("\n");
    
    printf("readBuf:");
    for (uint8_t i = 1; i <= 2; i++)
    {
       printf("%x", *(msg->readBuf));
       msg->readBuf++;
    }
}