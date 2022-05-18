//Insertion Sort in Python

function InsertionSort(array){
    for(let step=1;step<array.length;step++){
        let key=array[step]
        let j=step-1
        
        // Compare key with each element on the left of it until an element smaller than it is found
        // For descending order, change key<array[j] to key>array[j].  
        while((j>=0) && (array[j]> key)){
            array[j+1]=array[j]
            j--
        }

        //Place key at after the element just smaller than it.
        array[j+1]=key
    }
    return array
}


let array=[5,4,3,2,1]

console.log(array)
InsertionSort(array)
console.log(array)
