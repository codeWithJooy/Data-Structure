#include<iostream>
#include<stdlib.h>

using namespace std;

#define MAX 5

class stack
{
private:
    int elements[MAX];
    int top;
public:
    stack();
    void push(int item);
    int pop();
    int isFull();
    int isEmpty();
    void displayElements();

};

stack::stack(/* args */)
{
   top=-1;
}

int stack::isEmpty(){
    if(top==-1)
       return 1;
    return 0;   
}

int stack::isFull(){
    if(top==(MAX-1))
       return 1;
    return 0;   
}

void stack::push(int item){
    if(isFull()){
        cout<<"Stack is Full Cannot add More"<<'\n';
        return;
    }
    elements[++top]=item;
    cout<<"Element added is "<<item<<"\n";
}

int stack::pop(){
    if(isEmpty()){
        cout<<"Stack is Empty Cannot Delete More"<<'\n';
        return 0;
    }
    int item=elements[top];
    --top;
    cout<<"Element removed is "<<item<<endl;
    return item;
}

void stack::displayElements(){
    for(int i=top;i>=0;i--){
        cout<<elements[i]<<endl;
    }
}

int main(){
    stack stk;
     int choice,item;

    do{
            cout<<endl<<"Welcome to Stack-o-mania"<<endl;
            cout<<"1-Add Element"<<endl;
            cout<<"2-Remove Element"<<endl;
            cout<<"3-Display All Elements"<<endl;
            cout<<"4-Exit"<<endl;
    
            cout<<"Enter your Choice ";
            cin>>choice;
            cout<<endl;

            switch(choice){
              case 1:cout<<"You Want to add Element"<<endl;
                     cout<<"Enter element to the stack ";
                     cin>>item;
                     stk.push(item);
                     break;

               case 2:cout<<"You Want to Remove Element "<<endl;
                      item=stk.pop();
                      break;       

                case 3:cout<<"You Want to Watch all Elements "<<endl;
                       stk.displayElements();
                       break;

                case 4:break; 

            }
    }while(choice!=4);
    return 0;
}



