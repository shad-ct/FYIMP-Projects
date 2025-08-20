# Factorial using recurssion : 
```
#include <stdio.h>

int main() {
    int facto(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        else{
            return n * facto(n-1);
        }
    }
    int a = facto(4);
    printf("%d",a);   
}
```
