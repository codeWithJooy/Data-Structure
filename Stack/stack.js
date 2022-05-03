class stack{
    constructor(){
        this.elements=[];
    }
    
    //add items to the stack
    Push(item){
        return this.elements.push(item)
    }

    //remove items from the stack
    Pop(){
        if(this.elements.length>0){
            return this.elements.pop()
        }
    }

    //Look for the top element
    Peek(){
        if(this.elements.length>0){
            return this.elements[this.elements.length-1]
        }
    }

    //Get the Size of the Stack
    Size(){
        return this.elements.length;
    }

    Clear(){
        this.elements=[]
    }
}

let st=new stack();

st.Push(25)
console.log(st.elements)
st.Push(35)
st.Push(45)
console.log(st.Peek())
st.Pop()
console.log(st.Peek())
console.log(st.elements)