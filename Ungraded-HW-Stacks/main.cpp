#include <iostream>
#include "STLStack.h"
using namespace std;

int main(){
    STLStack<int> sta;
	sta.push(1);
	sta.push(2);
	sta.push(3);
	sta.push(4);
	sta.push(5);
	sta.push(6);
	//sta.pop();

	//if stack is not empty, peek
	if (!sta.isEmpty())
		std::cout << "Peeked value: " << sta.peek() << endl;


	//if stack is not empty, pop
	if (!sta.isEmpty()) {
		sta.pop();
		std::cout << "Popped value. " << endl;
	}
	else
		std::cout << "Stack empty\n";

	//if stack is not empty, peek
	if (!sta.isEmpty())
		std::cout << "Peeked value: " << sta.peek() << endl;

	sta.~STLStack();

	//will not work after destructor is called
	//sta.push(1);


    system("pause");
    return 0;
}
