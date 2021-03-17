#include <stdio.h>

int main()
{
    int arr[100],size,i,j;

    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("Enter %d number : ", size);

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements \n");

    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i] == arr[j])
                break;

        }

        if (i==j)
            printf("%d ", arr[i]);

    }

    return 0;
}