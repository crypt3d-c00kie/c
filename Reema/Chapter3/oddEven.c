#include <stdio.h>
#include <conio.h>

// odd or even

int main()
{
   int nValue;

    printf("Your number : ");
    scanf("%d", &nValue);

    if (nValue % 2 ==0)
    {
        printf("The number you've entered is Even\n");
    }
    else
    {
        printf("The number you've entered is Odd\n");
    }
    
    return 0;
}