#include "Data.h"
#include "Constants.h"
#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

// Time Complexity??
// Big O?


// Linked List
struct Node {
	int data;
	struct Node* next;
};

// Hash Table
unsigned long hash_function(char* str) {
	unsigned long i = 0;
	for (int j = 0; str[j]; j++) {
		i += str[j];
	}
	return i % HASH_SIZE;
}

typedef struct HashTableItem;

struct HashTableItem {
	char* key;
	char* value;
};

struct HashTable {
	HashTableItem** items;
	int size; // size of hash table
	int count; // num of elements in hash table
};

// Data class functions
float Data::getArray() {
	int example[3] = {1, 2, 3};
}


float getLinkedList() {
	Node* head = NULL;

	head = new Node();
}

float getSet() {
	std::set<char> example;
	example.insert('A');
	example.insert('B');
	example.insert('B');
	example.insert('A');
	example.insert('Z');

	cout << "Set: " << example << endl;
}

float getMap() {
	map<char, string> example;

	example['a'] = "Hello";
	example['b'] = "My";
	example['c'] = "Friend";

	printf(" % s % s\n", example['a'], example['b'], example['c']);
}

//https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus
float getHash() {}

//https://www.geeksforgeeks.org/heap-using-stl-c/
float getHeap() {}

//https://www.geeksforgeeks.org/stack-in-cpp-stl/
float getStack() {}

//https://www.geeksforgeeks.org/queue-cpp-stl/
float getQueue() {}

//https://www.softwaretestinghelp.com/graph-implementation-cpp/#:~:text=As%20stated%20above%2C%20a%20graph,%2C(B%2CD)%7D.
//https://www.geeksforgeeks.org/graph-and-its-representations/
float getGraph() {}

//Binary:
//https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
float getTree() {}

//https://www.geeksforgeeks.org/vector-in-cpp-stl/
float getVector() {
	vector<int> g1;
}