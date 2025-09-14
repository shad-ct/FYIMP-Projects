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

# Insert at a given position : 
```
#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5};
    
    int i, value = 69, pos= 3;
    // 1,2,3,69,4,5
    for(i=5;i> pos;i--){
        a[i] = a[i-1];
    }
    
    a[pos] = value;
    
    for(i=0;i<6;i++){
        printf("%d \t",a[i]);
    }
}
```
