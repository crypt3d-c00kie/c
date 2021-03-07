#include <stdio.h>
#include <math.h>
#include <conio.h>

// driver code

void main()
{
    int a,b,c;
    float D, deno, root1, root2;

    printf("\nEnter values of a & b & c : \n" );
    scanf("%d %d %d", &a,&b,&c);

    D = (b*b) - (4*a*c);    // bsquared minus 4ac by 2a aka the quadratic formula to find roots
    deno = 2*a;

    if (D>0)
    {
        printf("\nReal roots");
        root1 = (-b + sqrt(D))/ deno;
        root2 = (-b - sqrt(D)) / deno;

        printf("\nRoot1 = %f || Root2 = %f \n",root1,root2);
    }
    else if (D == 0)
    {
        printf("Equal roots\n");
        root1 = -b/deno;
        printf("Root1 = %f || Root2 = %f \n", root1,root1);

    }
    else
    {
        printf("The Roots are imaginary\n");
    }
    

}