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
let one=new Node(15)
let two=new Node(25)
let three=new Node(35)

ll.head=one
one.next=two
two.next=three
three.next=one
let num=1
while(num!=5){
    console.log(ll.head.data)
    ll.head=ll.head.next
    num=num+1
}