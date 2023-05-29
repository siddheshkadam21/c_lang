#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
int main()
{
    double gpa,x,xx,val,ret;
    char name[] = "Test";
    int age = 23;
    gpa = 7.9;
    char grade = 'A';
    int value= 1234567;
    int neg_val = -3333;
    x = 0;
    xx = 60.0;
    val = PI / 180;
    ret = cos(xx * val);
    printf("My name is %s and my birth year is %d gpa %f \n",name,age,gpa);
    printf("grade %d \n",grade);
    printf("gpa %f \n",gpa);
    printf(" Power %f \n", pow(2,2));
    printf("square root %f \n", sqrt(36));
    printf("round the number %f \n", ceil(36.356));
    printf("round the number down wards %f \n",floor(36.356));
    printf("absolute value of %d is %f \n",value,fabs(value));
    printf("absolute value of %d is %f \n",neg_val,fabs(neg_val));
    printf("log of %d is %lf \n",age,log10(age));
    printf("Reminder of %d / %d is %f \n",value,age, fmod(value,age));
    printf("The exponential value of %f is %f \n",x,exp(x));
    printf("The exponential value of %d is %f \n",age,exp(age));
    printf("the cosine of %f is %f degrees \n",xx,ret);
    printf("the hyperbolic tnagent of %f is %f degrees \n",gpa,tanh(gpa));

    return 0;
}
