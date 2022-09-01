#include<stdio.h>
int main ()
{
  int num,i,fact;

    printf("Please enter number to find its factorial");
    scanf("%i",&num);

    i=1;
    fact=1;

    while(i<=num)
    {
        fact=fact*i;
        i++ ;
    }

    printf("The factorial of the number is \n %i",fact);

    return 0;
}