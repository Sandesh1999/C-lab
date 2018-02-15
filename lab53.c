#include <stdio.h>
int main()
{
    int a=0,b=1,c=0;
    while (c<=300)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
