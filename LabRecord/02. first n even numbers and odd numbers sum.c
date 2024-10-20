#include <stdio.h>

int main()
{
    // first n even numbers and odd numbres sum
    
    int n,i,even=0,odd =0;
    printf("enter the n : ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        if(i%2==1){
            odd = odd + i;
        }
        
        if(i%2==0){
            even = even + i;
        }
    }
    printf("sum of %d odd numbers = %d \n",n,odd);
    printf("sum of %d even numbers = %d",n,even);
}
