class Node{
    constructor(item){
         this.data=item;
         this.next=null;
         this.prev=null;
    }
}

class LinkedList{
    constructor(){
        this.head=null;
    }
}

let ll=new LinkedList()

ll.head=new Node(15)
let two=new Node(25)
let three=new Node(35)

ll.head.next=two
ll.head.prev=null
two.next=three
two.prev=ll.head
three.prev=two
three.next=null

let dir=0

while(ll.head!=null){
   console.log(ll.head.data)
   if(ll.head.next==null){
       dir=1
   }
   if(dir==0){
       ll.head=ll.head.next
   }
   else{
       ll.head=ll.head.prev
   }
}