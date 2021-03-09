#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i=0;
    int x;
    int sum = 0;
    float avg;

    printf("How many numbers? : ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        sum = sum+x;
    
    }
    
    avg = (sum/n);

    printf("Average is : ");
    printf("%.2f", avg);

    return 0;
}