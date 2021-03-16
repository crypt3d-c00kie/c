#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2,num3,large;
    printf("\n");

    printf("Three numbers : ");
    scanf("%d %d %d",&num1, &num2, &num3);

    //ternary operator

    large = num1 > num2? (num1>num3?num1:num3):(num2>num3?num2:num3);

    printf("The largest number : %d\n", large);


    return 0;
}