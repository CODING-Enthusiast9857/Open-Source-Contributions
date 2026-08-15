class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Stack:
    def __init__(self):
        self.top = None

    def is_empty(self):
        return self.top is None

    def push(self, data):
        new_node = Node(data)
        new_node.next = self.top
        self.top = new_node

    def pop(self):
        if self.is_empty():
            raise IndexError("pop from empty stack")

        data = self.top.data
        self.top = self.top.next
        return data

    def peek(self):
        if self.is_empty():
            raise IndexError("peek from empty stack")

        return self.top.data

    def display(self):
        current = self.top

        while current:
            print(current.data, end=" ")
            current = current.next

        print()


# Example usage
stack = Stack()

stack.push(10)
stack.push(20)
stack.push(30)

print("Stack:")
stack.display()

print("Top element:", stack.peek())
print("Popped element:", stack.pop())

print("Stack after pop:")
stack.display()
