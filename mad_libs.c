#include <stdio.h>
#include <stdlib.h>
int main()
{
    char color[20];
    char pronoun[20];
    char celebf[20];
    char celebl[20];

    printf("Enter color:");
    scanf("%s",color);

    printf("Enter prnoune:");
    scanf("%s",pronoun);
    
    printf("Enter celeb name:");
    scanf("%s %s",celebf , celebl);
    
    /*printf("Enter celeb last name:");
    scanf("%s",celebl);
    */

    printf("Roses are %s \n", color);
    printf("Violets are %s \n",pronoun);
    printf("I love %s %s \n",celebf, celebl);

    return 0;   
}