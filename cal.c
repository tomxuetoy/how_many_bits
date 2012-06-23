#include <stdio.h>

main()
{            
    unsigned char uint8 = 0;
    signed char int8 = 0;
    unsigned short uint16 = 0;
    signed short int16 = 0;
    unsigned int uint32 = 0;
    signed int int32 = 0;
    float fp32 = 0;
    double fp64 = 0;
    unsigned long ulong = 0;
    void *p;

    printf("unsigned char is %d bit\n\r", sizeof(uint8)*8);
    printf("signed char is %d bit\n\r", sizeof(int8)*8);
    printf("unsigned short is %d bit\n\r", sizeof(uint16)*8);
    printf("signed short is %d bit\n\r", sizeof(int16)*8);
    printf("unsigned int is %d bit\n\r", sizeof(uint32)*8);
    printf("signed int is %d bit\n\r", sizeof(int32)*8);
    printf("float fp32 is %d bit\n\r", sizeof(fp32)*8);
    printf("double fp64 is %d bit\n\r", sizeof(fp64)*8);
    printf("unsigned long is %d bit\n\r", sizeof(ulong)*8);
    printf("void* is %d bit\n\r", sizeof(void*)*8);
}
