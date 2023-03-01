#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


bool prime(int);
bool palindrome(int num);
int main() {
    int num;
    scanf("%d",&num);
    
    if(palindrome(num) && prime(num))
        printf("YES");
    else
        printf("NO");
        
}

bool prime(int n)
{
    int count;
    
    if(n<2)
        return false;
    for(count=2;count<n;count++)
    {
        if(n%count==0)
         return false;
         
    }
    return true;
 
}

bool palindrome(int n)
{
    int rev,a;
    rev=0;a=n;
    
    while(a!=0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    return(n==rev);
}
