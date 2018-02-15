#include <stdio.h>
int main()
{
    FILE *fptr;
    char c;
    int i=0;
    fptr = fopen("filec.txt","r");
    if (fptr == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    while ((c = fgetc(fptr))!= EOF)
    {
        i++;
        putchar(c);
    }
    printf("\nThe number of characters are %d",i);
    fclose(fptr);
    return 0;
}
