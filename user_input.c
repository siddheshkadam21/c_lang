#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* comment
    printf("hello");
    */
    int age;
    double gpa;
    char grade;
    char name[20];
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your gpa: ");
    scanf("%lf",&gpa);
    printf("Enter your grade: ");
    scanf("%c",&grade);
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s \n", name);
    printf("Your age is %d \n",age);
    printf("Your gpa is %f \n",gpa);
    printf("Your grade is %c \n",grade);
    return 0;
}

