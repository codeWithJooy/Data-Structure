class Queue{
    constructor(){
        this.elements=[]
    }
    
    //Check if Queue is Empty
    isEmpty(){
        return this.elements.length==0
    }
    
    //Get the First Element of Queue
    front(){
        if(this.isEmpty()){
            return "Queue Is Empty"
        }
        return this.elements[0]
    }

    //Add Element to Queue
    enQueue(item){
        this.elements.push(item)
    }

    //Remove Element from Queue
    deQueue(){
        if(this.isEmpty()){
            return "Queue is Empty.Cant Remove More"
        }
        return this.elements.shift()
    }

    //Print the Whole Queue
    printQueue(){
        let str=""
        for(let i=0;i<this.elements.length;i++){
            str+=this.elements[i]+" "
        }
        return str
    }


}

let qu=new Queue()

console.log(qu.deQueue())
console.log(qu.front())

qu.enQueue(10)
qu.enQueue(20)
qu.enQueue(30)

console.log(qu.printQueue())

console.log(qu.deQueue())

console.log(qu.printQueue())