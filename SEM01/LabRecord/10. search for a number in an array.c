#include <stdio.h>

int main(){
    int arr[100],len,i,search,pos,flag;
    
    printf("enter your array length : \n");
    scanf("%d",&len);
    
    printf("enter your numbers : \n");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
    // search : 
    
    printf("enter the number you want to search : ");
    scanf("%d",&search);
    
    for(i=0;i<len;i++){
        if(arr[i] == search){
            flag = 1;
            pos = i;
        }
    }
    
    if(flag == 1){
        printf("Found %d at : %d",search,pos+1);
    }
    else{
        printf("%d Not Found ",search);
    }
    
    // what if there were 2 or more same elements in the array? 
}
