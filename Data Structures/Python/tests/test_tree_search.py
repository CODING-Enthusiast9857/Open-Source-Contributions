import unittest
import sys

sys.path.append('..')
# sys.path.append('../tree.py')
from tree import Node
class TestTreeClassSearch(unittest.TestCase):

    def test_basic_search(self):
        n = Node(5)
        self.assertIsNone(n.leftChild, 'Left child should be None')
        self.assertIsNone(n.rightChild, 'Right child should be None')
        self.assertEqual(n.data, 5, "Data should be 5")
        self.assertEqual(n.search(5), str(5)+" is found in the BST" , 'Should find 5 in the tree')
    def test_terrific_search(self):
        
        root = Node(2)
        for x in range(0, 540):
            root.insert(x)
            self.assertEqual(root.search(x), str(x)+" is found in the BST", "Should find {str(x)} in BST")
        for x in range(0, 340):
            root.insert(x)
            self.assertEqual(root.search(x), str(x)+" is found in the BST", "Should find {str(x)} in BST")


if __name__ == '__main__':
    unittest.main()