#include <stdio.h>
#include <conio.h>



int main()
{
    int num1,num2;

    printf("Enter both numbers : ");
    scanf("%d %d", &num1,&num2);

    printf("***************\n");
    printf("Pre-swap : %d %d \n", num1,num2);

    // swapping 2 numbers without temp
    
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Post-swap : %d %d \n", num1,num2);



    return 0;
}