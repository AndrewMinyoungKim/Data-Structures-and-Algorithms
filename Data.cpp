#include "Data.h"
#include "Constants.h"
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

// Time Complexity??
// Big O?

// Linked List
struct Node
{
	int data;
	struct Node *next;
};

// Hash Table
unsigned long hash_function(char *str)
{
	unsigned long i = 0;
	for (int j = 0; str[j]; j++)
	{
		i += str[j];
	}
	return i % HASH_SIZE;
}

typedef struct HashTableItem;

struct HashTableItem
{
	char *key;
	char *value;
};

struct HashTable
{
	HashTableItem **items;
	int size;  // size of hash table
	int count; // num of elements in hash table
};

// Graphs
// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex " << v
			 << "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

// Queue
// Print the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// Tree
// Structure of each node of the tree

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

// Data class functions
float Data::getArray()
{
	int example[3] = {1, 2, 3};
}

float getLinkedList()
{
	Node *head = NULL;

	head = new Node();
}

float getSet()
{
	std::set<char> example;
	example.insert('A');
	example.insert('B');
	example.insert('B');
	example.insert('A');
	example.insert('Z');

	cout << "Set: " << example << endl;
}

float getMap()
{
	map<char, string> example;

	example['a'] = "Hello";
	example['b'] = "My";
	example['c'] = "Friend";

	printf(" % s % s\n", example['a'], example['b'], example['c']);
}

// https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus
// https://www.geeksforgeeks.org/c-program-hashing-chaining/
float getHash()
{
	// usually dynamically allocated
}

// https://www.geeksforgeeks.org/heap-using-stl-c/
float getHeap()
{
	// Initializing a vector
	vector<int> v1 = {20, 30, 40, 25, 15};

	// Converting vector into a heap
	// using make_heap()
	make_heap(v1.begin(), v1.end());

	// Displaying the maximum element of heap
	// using front()
	cout << "The maximum element of heap is : ";
	cout << v1.front() << endl;

	// using push_back() to enter element
	// in vector
	v1.push_back(50);

	// using push_heap() to reorder elements
	push_heap(v1.begin(), v1.end());

	// Displaying the maximum element of heap
	// using front()
	cout << "The maximum element of heap after push is : ";
	cout << v1.front() << endl;

	// using pop_heap() to delete maximum element
	pop_heap(v1.begin(), v1.end());
	v1.pop_back();

	// Displaying the maximum element of heap
	// using front()
	cout << "The maximum element of heap after pop is : ";
	cout << v1.front() << endl;
}

// https://www.geeksforgeeks.org/stack-in-cpp-stl/
float getStack()
{
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);

	stack.pop();
	stack.pop();

	while (!stack.empty())
	{
		cout << ' ' << stack.top();
		stack.pop();
	}
}

// https://www.geeksforgeeks.org/queue-cpp-stl/
float getQueue()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);
}

// https://www.softwaretestinghelp.com/graph-implementation-cpp/#:~:text=As%20stated%20above%2C%20a%20graph,%2C(B%2CD)%7D.
// https://www.geeksforgeeks.org/graph-and-its-representations/
float getGraph()
{
	// Adjacency Matrix:
	int n, m;
	// n is num of vertices
	// m is number of edges
	cin >> n >> m;
	int adjMat[n + 1][n + 1];
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adjMat[u][v] = 1;
		adjMat[v][u] = 1;
	}

	// Adjacency List
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
}

// Binary:
// https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
float getTree()
{
	/*create root*/
	// node *root = struct node(1);
	/* following is the tree after above statement

			 1
			/ \
		NULL   NULL
	*/

	// root->left = struct node(2);
	// root->right = new node(3);
	/* 2 and 3 become left and right children of 1
				  1
				/   \
				2      3
			   / \     / \
			NULL NULL NULL NULL
	*/

	// root->left->left = new node(4);
	/* 4 becomes left child of 2
			  1
			/    \
		   2      3
		  / \     / \
		 4 NULL NULL NULL
		/ \
	  NULL NULL
	*/
}

// https://www.geeksforgeeks.org/vector-in-cpp-stl/
float getVector()
{
	vector<int> g1;
}