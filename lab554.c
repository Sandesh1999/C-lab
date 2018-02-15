#include <stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {
       k=i;
       for (j=5;j>=i;j--)
       {
           printf("%d\t",k);
           k=k+j;
       }
       printf("\n");
    }
}
