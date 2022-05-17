#include<iostream>
using namespace std;

//Bubble Sort
void BubbleSort(int array[],int size){
    //The First Loop is For the Number of repetition
    for(int step=0;step<size;step++) {
    
    //This loop for comparing and swaping in Each Repetition.
     for(int i=0;i<size-step;i++) {
            
            if(array[i]>array[i+1]) {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" , ";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    printArray(arr,size);

    BubbleSort(arr,size);

    printArray(arr,size);
}