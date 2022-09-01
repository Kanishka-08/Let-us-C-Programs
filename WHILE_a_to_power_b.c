#include<stdio.h>

int main ()
{
    int a ,b, count ;
    float n,u;

    printf("Please two numbers to find value of first no raised to power second number");
    scanf("%i %i",&a,&b);

    count=1;
    n=a;

    
    if(b>0)
        
       { while (count<b)
        { 
           n=n*a;
           count++  ;
        }

        printf("The resultant value is %f",n);
       } 

    else if(b<0)
          
       { b=-1.0*b;
         while (count<b)
           { 
             n=n*a;
             count++  ;
           }

           u=1.0/n;
           printf("The resultant value is %f",u); 
       }   

     else if(b==0)
          printf("The resultant value is 1");  

    

    
     return 0; 
}