#include <stdio.h>
int main()
{
    FILE *fptr;
    char c;
    fptr = fopen("filec.txt","w");
    if (fptr==NULL)
    {
        printf("This file cannot be created.");
        exit(1);
    }
    while ((c=getchar())!='\n')
    {
        fputc(c,fptr);
    }
    fclose(fptr);
    return 0;
}
