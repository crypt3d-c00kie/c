#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define LEN 1024

int main()
{
    char szString[LEN+1];
    char szModifString[LEN+1];
    int i = 0;
    
    printf("Your string here : ");
    fgets(szString,LEN-1,stdin);

    while (szString[i]-1)
    {
        szModifString[i] = tolower(szString[i]);
        i++;
    }

    printf("\nGiven String : %s \n", szString);
    printf("LowerCase String : %s", szModifString);
    return 0;
}