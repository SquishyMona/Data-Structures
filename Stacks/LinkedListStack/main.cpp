#include <iostream>
#include "LLStack.h"
using namespace std;

int main() {
    LLStack<int> sta;
	sta.push(1);
	sta.push(2);
	sta.push(3);
	sta.push(4);
	sta.push(5);
	sta.push(6);
	//sta.pop();

	//if stack is not empty, peek
	if (!sta.isEmpty())
		cout << "Peeked value: " << sta.peek() << endl;


	//if stack is not empty, pop
	if (!sta.isEmpty()) {
		sta.pop();
		cout << "Popped value. " << endl;
	}
	else
		cout << "Stack empty\n";

	//if stack is not empty, peek
	if (!sta.isEmpty())
		cout << "Peeked value: " << sta.peek() << endl;

	sta.~LLStack();

	//will not work after destructor is called
	//sta.push(1);

    return 0;
}
