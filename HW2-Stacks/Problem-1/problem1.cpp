#include <iostream>
#include "OurStack.h"
using namespace std;

int main(){
  OurStack<int> sta;
  sta.push(2);
  sta.push(3);

  if (!sta.isEmpty())
    cout << sta.peek() << endl;
  
  while(!sta.isEmpty()){
      cout << sta.peek() << " ";
      sta.pop();
  }

  std::cout << std::endl;

  return 0;
}