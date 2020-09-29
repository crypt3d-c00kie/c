#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float distance;

    printf("\n");
    printf("X and Y of first point : ");
    scanf("%d %d", &x1, &y1);

    printf("X and Y of second point : ");
    scanf("%d %d", &x2, &y2);

    //pow and sqrt is included from math.h

    distance = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    printf("\n Distance = %.2f\n", distance);

    return 0;
}