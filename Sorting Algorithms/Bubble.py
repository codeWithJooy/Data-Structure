#Bubble Sort for Sorting in ascending Order
def BubbleSort(arr):
    #this loop is to iterate through each element
    for step in range(len(arr)):

        #this loop is to compare each element
        for i in range(len(arr)-step-1):
            #compare adjacent element
            #swap if left element is greater then right element.
            if arr[i]>arr[i+1]:
                arr[i],arr[i+1]=arr[i+1],arr[i] 
                
arr=[5,4,3,2,1]

print(arr)

BubbleSort(arr)

print(arr)
