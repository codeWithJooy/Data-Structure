class Node:
    def __init__(self,item):
        self.data=item
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

if __name__=='__main__':
    ll=LinkedList()

    ll.head=Node(100)
    two=Node(200)
    three=Node(300)

    ll.head.next=two
    two.next=three 

    while ll.head!=None:
        print(ll.head.data)
        ll.head=ll.head.next               