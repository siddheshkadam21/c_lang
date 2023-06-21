#include <stdio.h>
#include <stdlib.h>
/*Function with return statement */
double cube(double num)
{
    double result = num * num * num;
    return result;
}

/*if else condition number grater than other*/
int max(int num1, int num2, int num3)
{
    int rlt;
    if(num1 >= num2 && num1>=num3)
    {
        rlt = num1;
    }else if (num2>=num1 && num2>=num3)
    {
        rlt = num2;
    }else{
        rlt = num3;
    }
    
    return rlt;
}


int main()
{
    
    printf("%d \n", max(4,10,9));
    
    printf("Answer: %f \n", cube(3.0));
    printhello("Fav");
    return 0;
}
/*function without return statement*/
void printhello(char name[])
{
    printf("Hello %s", name);
}

