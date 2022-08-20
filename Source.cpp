#include <iostream>

using namespace std;


int main(void) {
	//std::cout << "hello" << endl; // if you don't write "using namespace std" at the top
	//cout << "hello" << endl;

	int done = false;

	// you can only create the non-pointer object if you do not initialize it, only declaration
	// Otherwise, you must make it a pointer object to also add an initialization as well
	//Game stack_game; //to create an object that has automatic storage duration (usually is on the stack)
	//Game *heap_game_init = new Game(); //to create an object that has dynamic storage duration (usually is on the heap)
	//Game *heap_game; //another way that works, you can also declare pointer object without initializing
	//NOOOOOO: Game stack_game_init = new Game(); NO, THIS IS WRONG! THE OTHER THREE ABOVE ARE OKAY

	//Game* game = new Game();

	while (!done) {
		done = true;
		continue;
	}

	return 0;
}