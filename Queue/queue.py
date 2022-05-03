class queue:
    def __init__(self):
        self.elements=[]
    def enqueue(self,item):
        self.elements.append(item)
    def dequeue(self):
        if len(self.elements) < 1:
            return None
        return self.elements.pop(0)    
    def display(self):
        print (self.elements)


qu=queue()

qu.enqueue(10)
qu.enqueue(20)
qu.enqueue(30)
qu.display()
qu.dequeue()
qu.display()