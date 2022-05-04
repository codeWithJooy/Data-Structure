#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
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

    head=one;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

    return 0;
}
