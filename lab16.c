//find simple interest
#include <stdio.h>
int main()
{
int p,t;
float r,si;
p=4000;
t=2;
r=5.5;
si=p*t*r/100;
printf ("the interest of principal %d time %d rate %f is %f",p,t,r,si);
return 0;
}
