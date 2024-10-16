#include <stdio.h>
#include <string.h>

int main()
{
    // reverse a string 
    
    char str[100],rev[100];
    int i;
    
    printf("Enter your string : \n");
    scanf("%s",str);
    int len = strlen(str);
    for(i=len;i>=0;i--){
        rev[i] = str[len-i-1];
    }
    printf("%s",rev);
    
}
