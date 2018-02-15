#include <stdio.h>
int main()
{
    int i=0,j=0,h=0;
    for (i=0;i<11;i++)
    {
        if (i==5)
        {
            h=0;
        }
        h++;
        for (j=0;j<h;j++)
        {
            printf("%c",0x2A);
        }
        printf("\n");
    }
    return 0;
}
