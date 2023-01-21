# Code for a binary tree
# Creating node class
class Node:
    def __init__(self, data):
        self.data = data
        self.leftChild = None
        self.rightChild = None

    # Function to insert in BST
    def insert(self, data):
        # if value is lesser than the value of the parent node
        if data < self.data:
            if self.leftChild:
                # if we still need to move towards the left subtree
                self.leftChild.insert(data)
            else:
                self.leftChild = Node(data)
                return
        # if value is greater than the value of the parent node        
        else:
            if self.rightChild:
                # if we still need to move towards the right subtree
                self.rightChild.insert(data)
            else:
                self.rightChild = Node(data)
                return
                
    # Function to search in BST
    def search(self, val):
        # if value to be searched is found
        if val==self.data:
            return str(val)+" is found in the BST"
        # if value is lesser than the value of the parent node
        elif val < self.data:
            # if we still need to move towards the left subtree
            if self.leftChild:
                return self.leftChild.search(val)
            else:
                return str(val)+" is not found in the BST"
        # if value is greater than the value of the parent node
        else:
            # if we still need to move towards the right subtree
            if self.rightChild:
                return self.rightChild.search(val)
            else:
                return str(val)+" is not found in the BST" 

    # function to print a BST
    def PrintTree(self):
        if self.leftChild:
            self.leftChild.PrintTree()
        print( self.data),
        if self.rightChild:
            self.rightChild.PrintTree()

# Creating root node
root = Node(27)
# Inserting values in BST
root.insert(14)
root.insert(35)
root.insert(31)
root.insert(10)
root.insert(19)
# printing BST
root.PrintTree()
