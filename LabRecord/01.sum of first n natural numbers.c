#include <stdio.h>

int main()
{
    // sum of first n natural numbers
    int i,n,num=0;
    printf("enter n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        num = num+i;
    }
    printf("%d",num);
    
}
