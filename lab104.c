#include <stdio.h>
int main()
{
    FILE *fptr;
    char name[20],n[20];
    int age,a;
    float height,h;
    fptr = fopen("person.txt","w+");
    if (fptr == NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    printf("Enter name of person: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter height: ");
    scanf("%f",&height);
    fprintf(fptr,"%s %d %f",name,age,height);
    rewind(fptr);
    fscanf(fptr,"%s %d %f",&n,&a,&h);
    printf("\nName = %s\nAge = %d\nHeight = %f",n,a,h);
    fclose(fptr);
    return 0;
}
