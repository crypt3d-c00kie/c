#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float area,S;

    printf("\n");
    printf("Length of three sides of the triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    S = (a+b+c)/2;

    //sqrt from <math.h>

    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area = %.1f\n", area);


    return 0;
}