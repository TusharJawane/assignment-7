#include<stdio.h>
#include<string.h>
void main()
{
    printf("Enter length of string to be entered\n");
    int n;
    scanf("%d",&n);
    char s[n+1];
    printf("Enter string\n");
    gets(s);
    printf("Enter a character\n");
    char a;
    scanf("%c",&a);
    int count=0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]==a) count++;
    }
    printf("frequency of %c =%d",a,count);
}