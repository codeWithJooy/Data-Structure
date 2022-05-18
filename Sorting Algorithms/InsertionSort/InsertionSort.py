#Insertion Sort in Python

def InsertionSort(arr):
    for step in range(1,len(arr)):
        key=arr[step]
        j=step-1

        # Compare key with each element on the left of it until an element smaller than it is found
        # For descending order, change key<array[j] to key>array[j].  
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j=j-1
            
        # Place key at after the element just smaller than it.    
        arr[j+1]=key 


arr=[5,4,3,2,1]
print(arr)
InsertionSort(arr)
print(arr)