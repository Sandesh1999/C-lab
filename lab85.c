#include <stdio.h>
#include <string.h>

void main()
{
    char s[200],r[200];
    int count = 0, i;
    printf("enter the string\n");
    gets(s);
    for (i = 0;i<(strlen(s));i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
        else if (s[i]=='.')
        {
            r[i-count]=':';
        }
        else
        {
            r[i-count]=s[i];
        }
    }
    r[i-count]='\0';
    printf("the corrected sentence is \n%s",r);
}
