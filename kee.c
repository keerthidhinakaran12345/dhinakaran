# dhinakaran
dhinakaran
#include <stdio.h>
int main()
{
  
    int num;
 
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    /*If number is divisible by 2 then number 
    is EVEN otherwise number is ODD*/
 
    if(num%2==0)
        printf("%d is an EVEN number.",num);
    else
        printf("%d is an ODD number.",num);
 
    return 0;
}
