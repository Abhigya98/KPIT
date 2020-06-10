#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20],d[20],e[20];
    int i=0,l=0,j=0;
    printf("Enter a string\n");
    scanf("%s",c);
    printf("The string is %s\n",c);
    while(c[i]!='\0')
    {
        l++;
        d[i]=c[i];
        i++;
    }
    d[l]='\0';
    printf("The length of the string is %d\n",l);
    printf("The copied string is %s\n",d);

    printf("Enter the string to concatenate: ");
    scanf("%s",e);
    for(i=l;e[j]!='\0';i++)
    {
        c[i]=e[j];
        j++;
    }
    c[i]='\0';
    printf("The concatenated string is %s",c);
    return 0;
}
