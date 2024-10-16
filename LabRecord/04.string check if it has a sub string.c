#include <stdio.h>
#include <string.h>


int main() {
    char str[100], substr[100];
    
    printf("Enter your main string : ");
    scanf("%s",str);
    printf("Enter your sub string : ");
    scanf("%s",substr);
    
    int len = strlen(str), sublen = strlen(substr), flag = 0, sup =0;
    
    for(int i = 0;i<=len-sublen;i++){
        if (strncmp(str + i, substr, sublen) == 0) { // strncmp(str1, str2, times to check)
            flag = 1;
            sup = i;
        }
    }
    if(flag ==1){
        printf("Sub string found at %d",sup);
    }
    else{
        printf("Sub string not found");
    }
}
