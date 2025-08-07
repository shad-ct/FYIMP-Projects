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
