#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    int sum=0;
    while (a!=0)
    {
        if((a%2)==0)
        {
            sum=sum+(a%10);
        }
        a=a/10;
    }
    while (b!=0)
    {
        if((b%2)==0)
        {
            sum=sum+(b%10);
        }
        b=b/10;
    }
    printf("\nthe sum of even digits:%d",sum);
    return 0;
}
