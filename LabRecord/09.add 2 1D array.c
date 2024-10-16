#include <stdio.h>

int main(){
    int str1[100],str2[100],add[100],len,i;
    
    printf("enter the array length : ");
    scanf("%d",&len);
    
    printf("enter your 1 array elements : \n");
    for(i=0;i<len;i++){
        scanf("%d",&str1[i]);
    }
    
    printf("enter your 2 array elements : \n");
    for(i=0;i<len;i++){
        scanf("%d",&str2[i]);
    }
    
    for(i=0;i<len;i++){
        add[i] = str1[i] + str2[i];
    }
    
    for(i=0;i<len;i++){
        printf("%d\t",add[i]);
    }
    
}
