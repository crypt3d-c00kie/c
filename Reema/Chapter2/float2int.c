#include <stdio.h>
#include <conio.h>

// floating point number to corresponding integer

int main()
{
    float fNum;
    int nVal;

    printf("Floating point number : ");
    scanf("%f",&fNum);
    // typecasting

    nVal = (int)fNum;

    printf("Integer variant of %.4f is %d\n", fNum, nVal);


    return 0;
}