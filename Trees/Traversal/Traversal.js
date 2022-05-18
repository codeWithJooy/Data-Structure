class Node{
    constructor(element){
       this.data=element
       this.left=null
       this.right=null
    }
}

function preorderTraversal(node){
    //return if node is null
    if(node==null){
        return
    }
    //Print the value of Current Node
    console.log(node.data)
    //make recursive call to the left subtree
    preorderTraversal(node.left)
    //make recursive call to right subtree
    preorderTraversal(node.right)
}

function inorderTraversal(node){
    //return if node is null
    if(node==null){
        return
    }

    //make recursive call to the left subtree
    inorderTraversal(node.left)
    //Print the value of Current Node
    console.log(node.data)
    //make recursive call to right subtree
    inorderTraversal(node.right)
}

function postorderTraversal(node){
    //return if node is null
    if(node==null){
        return
    }
    
    //make recursive call to the left subtree
    postorderTraversal(node.left)
    //make recursive call to right subtree
    postorderTraversal(node.right)
    //Print the value of Current Node
    console.log(node.data)
}

let root=new Node(1)
root.left=new Node(2)
root.right=new Node(3)
root.left.left=new Node(4)
root.left.right=new Node(5)

console.log("PreOrder traversal")
preorderTraversal(root)

console.log("InOrder traversal")
inorderTraversal(root)

console.log("PostOrder traversal")
postorderTraversal(root)