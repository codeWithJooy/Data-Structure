class Node{
    constructor(item){
        this.data=item
        this.next=null
    }
}

class LinkedList{
    constructor(){
        this.head=null
    }
}

let ll=new LinkedList()
ll.head=new Node(15)
let two=new Node(25)
let three=new Node(35)

ll.head.next=two
two.next=three

while(ll.head!=null){
    console.log(ll.head.data)
    ll.head=ll.head.next
}