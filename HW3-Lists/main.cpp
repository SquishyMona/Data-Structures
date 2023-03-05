#include <iostream>
#include "LLList.h"
using namespace std;

int main(){

    LLList<int> myList;
	//myList.printList();

    myList.insert(myList.getLength(),10);
    myList.insert(myList.getLength(),20);
    myList.insert(myList.getLength(),30);
    myList.insert(myList.getLength(),40);
    //myList.printList();
    myList.insert(0,50);
	myList.insert(0,60);
	myList.insert(myList.getLength(), 70);
    cout <<"Value: " << myList.getEntry(2) << endl;
    //myList.printList();
    //myList.insert(3,60);
    myList.printList();
    myList.remove(700);
    //myList.printList();
    myList.replace(3,80);
    myList.printList();
    myList.insert(myList.getLength(),90);
    //myList.insert(2,60);
    std::cout << myList.getEntry(4) << std::endl; 
	myList.clear();
    myList.printList();
	//system("pause");
    return 0;
}
