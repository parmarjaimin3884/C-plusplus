
#include <stdio.h>
#include<string.h>

int main()
{
    char str[25];
    int i,len;

    printf("Enter the string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("\nThe length of the string is %d\n",len);
    return 0;
}
