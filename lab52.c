#include <stdio.h>
int main()
{
    printf("\nenter two numbers:");
    int a,b,x,y,rem;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while (a!=0)
    {
        rem=b%a;
        b=a;
        a=rem;
    }
    printf("\nHCF = %d",b);
    printf("\nLCM = %d",(x*y)/b);
    return 0;
}
