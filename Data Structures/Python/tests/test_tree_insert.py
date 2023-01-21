import unittest
import sys

sys.path.append('..')
# sys.path.append('../tree.py')
from tree import Node
class TestTreeClassInsertion(unittest.TestCase):

    def test_insertion(self):
        import random
        r = random.choice([5,8,23,14])
        root = Node(20)
        for x in range(0, r):
            root.insert(x)
            self.assertEqual(root.search(x), str(x)+" is found in the BST", "Should find {str(x)} in BST")
            
    def test_insertion_crazy(self):
        import random
        r = random.choice([140,234,345])
        root = Node(233)
        for x in range(0, r):
            root.insert(x)
            self.assertEqual(root.search(x), str(x)+" is found in the BST", "Should find {str(x)} in BST")

if __name__ == '__main__':
    unittest.main()