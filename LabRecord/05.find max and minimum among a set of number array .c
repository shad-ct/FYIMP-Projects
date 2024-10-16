#include <stdio.h>

int main()
{
    // find max and minimum among a set of number array 
    int num[100],i,len;
    printf("Size of array : \n");
    scanf("%d",&len);
    printf("Enter your numbers : \n");
    
    
    for(i=0;i<len;i++){
        scanf("%d",&num[i]);
    }    
    
    int max = num[0];
    int min = num[1];
    
    for(i=0;i<len;i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
        }
    }
    
    printf("Max is : %d and Min is : %d",max,min);
    
    
}
