#include <stdio.h>
#include <conio.h>

// size of data types

int main()
{
    printf("Integer      : %d\n", sizeof(int));
    printf("Unsigned int : %d\n", sizeof(unsigned int));
    printf("Signed int   : %d\n", sizeof(signed int));
    printf("Long integer : %d\n", sizeof(int));
    printf("Character    : %d\n", sizeof(char));
    printf("Unsigned char: %d\n", sizeof(unsigned char));
    printf("Signed char  : %d\n", sizeof(signed char));
    printf("Float        : %d\n", sizeof(float));
    printf("Double       : %d\n", sizeof(double));

    return 0;

}