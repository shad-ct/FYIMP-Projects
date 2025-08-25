### Linear Search:
```
#include <iostream>
using namespace std;


int main() {
    int arr[4] = {1,2,2,3};
    int find = 3;
    for(int i =0;i<4;i++){
        if(arr[i] == find){
            cout << "Found at : " << i+1;
            break;
        }
    if(i==5){
            cout << "element not found"'
        }
    }

}
```


### Binary Search: 
```
const arr = [1,2,3,4,5,6,7,8,9]

function Find(target, start, end){
    if(start > end){
        return "not found"
    }
    const mid = Math.floor( (start+end)/2)
    
    if(arr[mid] == target){
        console.log("found at ", arr[mid]);
    }
    
    if(arr[mid] > target){
        Find(target, start, mid-1)
    }
    if(arr[mid] < target){
        Find(target, mid+1, end)
    }
}
const len = arr.length;

Find(2,arr[0], len)
```


while code for binary search : 
```
#include <stdio.h>

int BinarySearch(int arr[], int target, int beg, int end) {
    while(beg <= end){
        int mid = beg + (end- beg)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
            
    }
    return -1;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int ans = BinarySearch(a, target, 0, 4);

    if (ans != -1)
        printf("Element found at index %d\n", ans+1);
    else
        printf("Element not found\n");

    return 0;
}

```

# Sorting : 

### Bubble sorting : 
```
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[6] = {23,123,432,44,234,45};
    
    int i,j,n=6-1,temp;
    
    for(i = 0;i < n ; i++){
        for(j = 0 ; j < n - i ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
```
### Selection Sort : 
```
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[6] = {23,123,432,44,234,45};
    int limit = 6, i, j , temp;
    for(i = 0; i < limit ; i++){
        for(j = i + 1; j < limit ;j ++){
            if(arr[i] > arr[j] ){
                temp = arr[i];
                arr[i]  = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(i=0;i<limit;i++){
        printf("%d\t",arr[i]);
    }
}
```
