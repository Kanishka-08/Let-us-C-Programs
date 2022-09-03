#include <stdio.h>
int main ()
{
    int a,b,c,num,n1,sum ;

    printf("Armstrong numbers between 1 and 500 are\n");

    num=1;
    
    while(num<=500)

       {   a=num%10 ;
           n1=num/10 ;
           b=n1%10 ;
           c=n1/10;

           if (num==(a*a*a)+(b*b*b)+(c*c*c))
              printf("%i\n",num);
          
           num++  ;  
       }   
    
    
    printf("Thankyou");
    return 0;       


}