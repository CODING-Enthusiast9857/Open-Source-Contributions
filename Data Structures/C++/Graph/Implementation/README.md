# Graph Traversal using DFS and BFS

## File Structure

This project consists of three main files:

1. **Graph.h**: This header file contains the declaration of the `Graph` class along with the prototypes of the BFS and DFS functions.

2. **Graph.cpp**: The source file implements the BFS and DFS functions defined in the `Graph` class. It also includes necessary headers and implements the logic for these graph traversal algorithms.

3. **main.cpp**: The main program file initializes a sample graph represented as an adjacency matrix and calls the DFS function to perform a depth-first search on the graph.

## Graph Representation

The code represents the graph as a static 2D array `G`, where `G[i][j]` is `1` if there is an edge from vertex `i` to vertex `j`, and `0` otherwise. This representation is known as an adjacency matrix representation of a graph.

## Depth-First Search (DFS)

### Implementation Details

- DFS is implemented as a recursive function `Graph::DFS`.
- The function takes three parameters: the adjacency matrix `G`, the starting vertex `start`, and the number of vertices `n`.
- It uses a static array `visited` to keep track of visited vertices.
- The traversal starts from the `start` vertex and marks it as visited.
- Then, it recursively explores all adjacent vertices of the current vertex `start` that have not been visited yet.

## Breadth-First Search (BFS)

### Implementation Details

- BFS is implemented as a non-recursive function `Graph::BFS`.
- The function also takes three parameters: the adjacency matrix `G`, the starting vertex `start`, and the number of vertices `n`.
- It utilizes a queue `Q` to maintain the order of vertices to be visited.
- BFS starts from the `start` vertex, marks it as visited, and enqueues it into the queue.
- It then enters a loop where it dequeues a vertex, prints it, and enqueues all unvisited adjacent vertices of the dequeued vertex.

## Uses and Functionality

- DFS and BFS are fundamental graph traversal algorithms used to explore and search for vertices and edges in a graph.

- DFS is often used to find paths, cycles, or connected components in a graph. It's also valuable for tasks like topological sorting and maze solving.

- BFS is commonly used to determine the shortest path between two vertices in an unweighted graph. It can also check for bipartiteness in a graph and systematically explore the neighborhood of a node step by step.

- The adjacency matrix representation is effective for dense graphs, enabling efficient edge existence checks.

- The provided code serves as a basic example of how to implement and use DFS and BFS on a graph represented as an adjacency matrix. It can be extended and adapted for more complex graph-related tasks.

## Differences between DFS and BFS

### Depth-First Search (DFS)

- **Traversal Approach**: DFS explores as far as possible along one branch of the graph before backtracking to explore other branches.

- **Data Structure**: It uses a stack (or recursion) to keep track of nodes to be visited.

- **Memory Usage**: DFS can use less memory compared to BFS because it only needs to remember the path from the root to the current node.

- **Applications**: DFS is useful for finding paths, cycles, or connected components in a graph. It's often used in topological sorting and maze solving.

### Breadth-First Search (BFS)

- **Traversal Approach**: BFS explores all neighbor nodes at the current depth level before moving to the next level. It systematically expands outward.

- **Data Structure**: It uses a queue to maintain the order of nodes to be visited.

- **Memory Usage**: BFS typically consumes more memory than DFS because it needs to remember all nodes at the current level.

- **Applications**: BFS is suitable for finding the shortest path in an unweighted graph, checking bipartiteness, and exploring the neighborhood of a node step by step.

Understanding these differences and the provided code structure will enable you to apply DFS and BFS effectively for various graph-related problems.
