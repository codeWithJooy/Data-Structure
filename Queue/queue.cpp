#include<iostream>

using namespace std;
#define MAX 5

class queue{
  private:
    int elements[MAX];
    int front;
    int rear;
  public:
     queue();
     int isFull();
     int isEmpty();
     void Enqueue(int item);
     int Dequeue();
     void Display();

};

queue::queue(){
    front=-1;
    rear=-1;
}

int queue::isFull(){
    if(front==0 && rear==(MAX-1)){
        return 1;
    }
    return 0;
}

int queue::isEmpty(){
    if(front==-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

void queue::Enqueue(int item){
    if(isFull()){
        cout<<"Queue if Full.Cant Add More "<<endl;
    }
    else{
        if(front==-1) front=0;
        elements[++rear]=item;
        cout<<endl<<"Inserted item "<<item<<endl;
    } 
}

int queue::Dequeue(){
     if(isEmpty()){
         cout<<"Queue is Empty.Cant Remove More "<<endl;
     }
     else{
         int item=elements[front];
         front++;
         if(front>rear){
             front=-1;
             rear=-1;
         }
         return item;
     }
}

int main(){
    queue qu;

    qu.Dequeue();
}