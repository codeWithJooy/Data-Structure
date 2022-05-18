#include<iostream>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" , ";
    }
    cout<<endl;
}

void InsertionSort(int array[],int size){
    for(int step=1;step<size;step++){
        int key=array[step];
        int j=step-1;
        
        //Compare key with each element on the left of it until an element smaller than it is found
        //For descending order, change key<array[j] to key>array[j]. 
        while(array[j]>key && j>=0){
            array[j+1]=array[j];
            j--;
        }

        //Place key at after the element just smaller than it.
        array[j+1]=key;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    printArray(arr,size);
    
    InsertionSort(arr,size);

    printArray(arr,size);

    return 0;

}

