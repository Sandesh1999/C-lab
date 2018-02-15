#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    char str[40];
    fptr = fopen("stringc.txt","w+");
    if (fptr == NULL)
    {
        printf("File cannot be created");
        exit(1);
    }
    printf("Enter strings to write on file:\n");
    while ((strlen(gets(str)))!=0)
    {
        fputs(str,fptr);
        fputs("\n",fptr);
    }
    rewind(fptr);
    printf("The contents of file are \n");
    while ((fgets(str,39,fptr))!=NULL)
    {
        printf("%s",str);
    }
    fclose(fptr);
    return 0;
}
