#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(){

    ArrayList<int> myList;

    myList.insert(myList.getLength(),10);
    myList.insert(myList.getLength(),20);
    myList.insert(myList.getLength(),30);
    myList.insert(myList.getLength(),40);
    //myList.printList();
    //myList.insert(1,50);
    cout << myList.getEntry(3) << endl;
    //myList.printList();
    //myList.insert(3,60);
    //myList.printList();
    //myList.remove(3);
    //myList.printList();
    myList.replace(3,70);
    //myList.printList();
    myList.insert(myList.getLength(),50);
    myList.insert(myList.getLength(),60);
    myList.insert(2,60);
    myList.printList();
	//system("pause");
    return 0;
}
