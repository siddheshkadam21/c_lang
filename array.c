#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Creating an array */
    int number[] = {1,2,3,4,5,6,7,8,9};
    printf("%d \n",number[5]);
    number[5] = 500; /*assigning*/
    printf("%d",number[5]); /* Indexing*/
    
    
    return 0;
}