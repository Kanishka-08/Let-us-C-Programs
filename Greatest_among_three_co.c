#include<stdio.h>
int main()
{
   float a,b,c;
    
    printf("Please enter value of first number");
    scanf("%f",&a);

    printf("Please enter value of second number");
    scanf("%f",&b);

    printf("Please enter value of third number");
    scanf("%f",&c);

    a>b?(a>c ? printf("%f  is greatest",a) : printf("%f is greatest",c)): (b>c ? printf("%f is greatest",b) : printf("%fis greatest",c));

   return 0;


}