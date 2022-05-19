function SelectionSort(arr,size){
  for(let step=0;step<size;step++){
      let min_idx=step
      for(let j=step+1;j<size;j++){
          if(arr[j] < arr[min_idx]){
              min_idx=j
          }
      }
      let temp=arr[step]
      arr[step]=arr[min_idx]
      arr[min_idx]=temp
  }
}

let arr=[5,4,3,2,1]
console.log("Unsorted Array")
console.log(arr)

SelectionSort(arr,arr.length)

console.log("Sorted Array")
console.log(arr)