#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string\n");
    gets(s);
    int l=strlen(s);
    int c=0;
    for(int i=0;i<=l/2;i++)
    {if(s[i]==s[l-i-1])
        {}
        else{
            printf("Not a palindrome");
            return 0;
        }
    }
    
    printf("String is a palindrome");
    return 0;
}