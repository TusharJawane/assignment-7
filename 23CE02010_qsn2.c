#include<stdio.h>
#include<string.h>
void main()
{
    printf("Enter a string\n");
    char str[100];
    gets(str);
    for(int i=0;i<=strlen(str);i++)
    {
        if(((int)str[i]>=65 && (int)str[i]<=90) || ((int)str[i]>=97 && (int)str[i]<=122))
        printf("%c",str[i]);
    }
}