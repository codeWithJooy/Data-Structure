#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" , ";
    }
    cout<<endl;
}

void SelectionSort(int array[],int size){
    for(int step=0;step<size;step++){
        int min=array[step];
        int index=step;
        for(int i=step+1;i<size;i++){
            if(array[i]<min){
                index=i;
            }
            
            swap(&array[index],&array[step]);
            
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    printArray(arr,size);
    
    SelectionSort(arr,size);

    printArray(arr,size);

    return 0;

}
