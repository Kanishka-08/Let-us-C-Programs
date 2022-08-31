#include <stdio.h>
int main()
{
    char s;

    printf("Please enter entity to check if its a special symbol");
    scanf("%c",&s);

    ((s>=32&& s<=47)||(s>=58&& s<=64)||(s>=91&& s<=96)||(s>=123&& s<=126))?printf("It is a special symbol"):printf("It is not a special symbol") ;

    return 0;
}
