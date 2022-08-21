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
struct NodeStruct
{
	int data;
	struct NodeStruct *next;
};

class Node
{
public:
	int data;
	Node *next;
};

// Hash Table
unsigned long
hash_function(char *str)
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
	// array of pointers to items
	HashTableItem **items;
	int size;  // size of hash table
	int count; // num of elements in hash table
};

HashTable *create_table(int size)
{
	HashTable *table = (HashTable *)malloc(sizeof(HashTable));
	table->size = HASH_SIZE;
	table->count = 0;
	table->items = (HashTableItem **)calloc(table->size, sizeof(HashTableItem *));
	for (int i = 0; i < table->size; i++)
		table->items[i] = NULL;
}

void free_item(HashTableItem *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(HashTable *table)
{
	for (int i = 0; i < table->size; i++)
	{
		HashTableItem *item = table->items[i];
		if (item != NULL)
			free_item(item);
	}

	free(table->items);
	free(table);
}

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

float getLinkedList()
{
	Node *head = NULL;

	head = new Node();
	head->data = 1;

	Node *next = new Node();
	next = head->next;

	next->data = 2;
	next->next = NULL;
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
	// LIFO
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);

	stack.pop();
	stack.pop();

	cout << "Stack: " << stack << endl;

	while (!stack.empty())
	{
		cout << ' ' << stack.top();
		stack.pop();
	}

	// methods of Queue:
	// all of them are O(1) complexity
	// empty(); // returns whether stack is empty
	// size(); // returns size
	// top(); // returns reference to the top most element
	// push(g); // adds element 'g' at the top of the stack
	// pop(); // deletes the top most element
}

// https://www.geeksforgeeks.org/queue-cpp-stl/
float getQueue()
{
	// FIFO
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

	// methods of Queue:
	// all of them are O(1) complexity
	// queue::empty(); // returns whether the queue is empty. True if queue is empty, o.w. false
	// queue::size();
	// queue::swap();	  // exchange the contents of two queues but the queues must be of the same data type, although sizes may differ
	// queue::emplace(); // insert a new element into the queue container, the new element is added to the end of the queue
	// queue::front();	  // returns reference to first element
	// queue::back();	  // returns reference to last element
	// queue::push(g);	  // adds element 'g' at the end of the queue
	// queue::pop();	  // deletes the first element of the queue
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
	// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container
	// placed in contiguous storage so that they can be accessed and traversed using iterators
	vector<int> g1;

	// Defintion: Iterator: an iterator is an object that enables a programmer to traverse a container, particularly lists.

	// Vector Functions:

	// begin();   // returns an iterator pointing to the first element
	// end();	   // returns an iterator pointing to the theoretical element that follows the last element
	// rbegin();  // returns a reverse iterator pointing to the last element (reverse beginning). It moves from last to first element
	// rend();	   // returns a reverse iterator pointing to the theoretical element preceding the first element (considered as reverse end)
	// cbegin();  // returns a constant iterator pointing to the first element
	// cend();	   // returns a constant iterator pointing to the theoretical element that follows the last element
	// crbegin(); // returns a constant reverse iterator pointing to the last element (reverse beginning). It moves from last to first element
	// crend();   // returns a constant reverse iterator pointing to the theoretical element preceding the first element (considered as reverse end)

	// Capacity:
	// size();			 // returns number of elements
	// max_size();		 // returns max number of elements the vector can hold
	// capacity();		 // returns size of storage space currently allocated to the vector expressed as a number of elements
	// resize(n);		 // resizes the container so that it contains 'n' elements
	// empty();		 // returns whether the container is empty
	// shrink_to_fit(); // reduces the capacity of the container to fit its size and destroys all elements beyond the capacity
	// reserve();		 // requests that the vector capacity be at least enough to contain n elements

	// Element Access:
	// reference operator [g] // returns a reference to the element at position 'g'
	// at(g);	 // returns a reference to the element at position 'g'
	// front(); // returns a reference to the first element
	// back();	 // returns a reference to the last element
	// data();	 // returns a direct pointer to the memory array used internally by the vector to store its owned elements. pointer to the first element

	// Modifiers:
	// assign();		// assign new value to the vector elements by replacing old ones
	// push_back();	// push the elements into a vector from the back
	// pop_back();		// pop or remove elements from a bector from the back
	// insert();		// inserts new elements before the element at the specified position
	// erase();		// remove elements from a container from the specified position OR range
	// swap();			// swap the contents of one vector with another vector of same type. Sizes may differ
	// clear();		// remove all the elements of the vector container
	// emplace();		// extends the container by inserting new element at position
	// emplace_back(); // insert a new element into the vector container, the new element is added to the end of the vector

	// The time complexity for doing various operations on vectors is:
	// Random access - constant O(1)
	// Insertion or removal of elements at the end - constant O(1)
	// Insertion or removal of elements - linear in the distance to the end of the vector O(n)
	// Knowing the size - constant O(1)
	// Resizing the vector - linear O(n)
}