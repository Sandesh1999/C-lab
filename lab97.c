#include <stdio.h>

typedef union{
    char surname[50];
    float salary;}fam;

enum week{sun,mon,tue,wed,thu,fri,sat};

int main()
{
    fam A;
    printf("Enter surname of family: ");
    scanf("%s",A.surname);
    printf("\nSurname = %s",A.surname);
    printf("\nEnter salary of family: ");
    scanf("%f",&A.salary);
    printf("\nSalary = %.3f",A.salary);
    enum week today;
    today = wed;
    printf("\nTommorrow is %d",today+2);
    return 0;
}
