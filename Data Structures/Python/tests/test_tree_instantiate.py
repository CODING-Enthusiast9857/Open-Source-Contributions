import unittest
import sys

sys.path.append('..')
# sys.path.append('../tree.py')
from tree import Node
class TestTreeClassInstantiate(unittest.TestCase):

    def test_instanciation(self):
        n = Node(5)
        self.assertIsNone(n.leftChild, 'Left child should be None')
        self.assertIsNone(n.rightChild, 'Right child should be None')
        self.assertEqual(n.data, 5, "Data should be 5")
        n = Node(123)
        self.assertIsNone(n.leftChild, 'Left child should be None')
        self.assertIsNone(n.rightChild, 'Right child should be None')
        self.assertEqual(n.data, 123, "Data should be 123")
    def test_instanciation_random(self):
        import random
        r = random.choice([5,8,23,14])
        for x in range(0, r):
            n = Node(x)
            self.assertIsNone(n.leftChild, 'Left child should be None')
            self.assertIsNone(n.rightChild, 'Right child should be None')
            self.assertEqual(n.data, x, "Data should be 5")
            n = Node(2*x)
            self.assertIsNone(n.leftChild, 'Left child should be None')
            self.assertIsNone(n.rightChild, 'Right child should be None')
            self.assertEqual(n.data, 2*x, "Data should be 123")

if __name__ == '__main__':
    unittest.main()