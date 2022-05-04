#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node* prev;  
};

int main(){
    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;

    one=new Node();
    two=new Node();
    three=new Node();
    
    one->data=10;
    two->data=20;
    three->data=30;

    one->next=two;
    two->next=three;
    three->next=NULL;

    one->prev=NULL;
    two->prev=one;
    three->prev=two;

    head=one;
    int dir=0; //dir=1 for moving backwords and 0 for moving forward.
    while(head!=NULL){
        cout<<head->data<<endl;
        if(head->next==NULL){
            dir=1;
        }
        if(!dir){
            head=head->next;
        }
        else{
            head=head->prev;
        }

    }
}