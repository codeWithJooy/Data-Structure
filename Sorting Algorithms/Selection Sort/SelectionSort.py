# Selection sort in Python
def SelectionSort(arr,size):
    for i in range(0,size):
        min_idx=i
        for j in range(i+1,size):

            # to sort in descending order, change > to < in this line
            # select the minimum element in each loop
            if arr[j]<arr[min_idx]:
                min_idx=j
        # put min at the correct position        
        arr[i],arr[min_idx]=arr[min_idx],arr[i]


arr=[5,4,3,2,1]
print("\nUnSorted Array")                
print(arr)

SelectionSort(arr,len(arr))

print("\nSorted Array")                
print(arr)