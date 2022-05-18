class Node:
    def __init__(self,element):
        self.data=element
        self.left=None
        self.right=None

def preorderTraversal(root):
    #Enter if Node is not Null
    if root:
        #Print The Value of The Node
        print(str(root.data)+"->",end='')
        #Make Recursive Call to the Left Subtree
        preorderTraversal(root.left)
        #Make Recursive Call to the Right Subtree
        preorderTraversal(root.right)

def inorderTraversal(root):
    #Enter if Node is not Null
    if root:
        #Make Recursive Call to the Left Subtree
        inorderTraversal(root.left)
        #Print The Value of The Node
        print(str(root.data)+"->",end='')
        #Make Recursive Call to the Right Subtree
        inorderTraversal(root.right)

def postorderTraversal(root):
    #Enter if Node is not Null
    if root:
        #Make Recursive Call to the Left Subtree
        postorderTraversal(root.left)
        #Make Recursive Call to the Right Subtree
        postorderTraversal(root.right)        
        #Print The Value of The Node
        print(str(root.data)+"->",end='')
        



root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)

print("PreOrder Traversal ")
preorderTraversal(root)

print("\nInOrder Traversal ")
inorderTraversal(root)

print("\nPostOrder Traversal ")
postorderTraversal(root)