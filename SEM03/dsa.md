### Binary Search : 
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
