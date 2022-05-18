def partition(arr,low,high):
   
   #Choose the Rightmost element as pivot
   pivot=arr[high]
   #pointer for Greater Element
   i=low-1

   #traverse through all elements
   #compare each element with pivot
   for j in range(low,high):
       # if element smaller than pivot is found
       # swap it with the greater element pointed by i
       if arr[j] <= pivot:
           i=i+1
           # swapping element at i with element at j
           arr[i],arr[j]=arr[j],arr[i]

   arr[i+1],arr[high]=arr[high],arr[i+1]

   return i+1


def QuickSort(arr,low,high):
    if low < high:
       # find pivot element such that
       # element smaller than pivot are on the left
       # element greater than pivot are on the right 
       pi=partition(arr,low,high)

       #Recursive Call on The left of Pivot
       QuickSort(arr,low,pi-1)

       #Recursive call on the Right of Pivot
       QuickSort(arr,pi+1,high) 

arr=[5,4,3,2,1]

print("Unsorted Array")
print(arr)
size=len(arr)
QuickSort(arr,0,size-1)

print("Sorted Array")
print(arr)
