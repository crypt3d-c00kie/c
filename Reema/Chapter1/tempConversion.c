#include <stdio.h>
#include <conio.h>

void f2c()
{
    float nFah;
    float nCel;
    
    printf("Temperature input (Fahrenheit) = ");
    scanf("%f", &nFah);

    nCel = ((0.56)*(nFah - 32));

    printf("Temperature output (Celsius) = %.1f\n", nCel);

}
void c2f()
{
    float nCel,nFah;

    printf("Temperature input (Celsius) = ");
    scanf("%f", &nCel);

    nFah = (nCel * 1.8) + 32;

    printf("Temperature output (Fahrenheit) = %.1f\n", nFah);

}
int main()
{
    int nChoice;

    printf("***********\n");
    printf("1. Celsius to fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Your Choice : ");
    scanf("%d", &nChoice);
    switch(nChoice)
    {
        case 1 :    c2f();
                    break;
        case 2 :    f2c();
                    break;
        default:    printf("Invalid choice\n");
                    return 0;
    }
    return 0;
}