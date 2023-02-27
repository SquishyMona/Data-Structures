/*
Use this .cpp file to solve Problem2.
Put all required header files in this folder.
Submit this file along with required header files on Github.
*/

#include <iostream>
#include <string>
#include "OurStack.h"

bool CheckForPalindrome(std::string);

int main() {
  std::string palindrome = "tacocat";

  if (CheckForPalindrome(palindrome))
  {
    std::cout << "'" << palindrome << "' is a palindrome!" << std::endl;
  }
  else 
  {
    std::cout << "'" << palindrome << "' is not a palindrome!" << std::endl;
  }

  return 0;

}

bool CheckForPalindrome(std::string palString)
{
  OurStack<char> palStack;
  for (int i = palString.length() - 1; i >= 0; i--)
  {
    palStack.push(palString[i]);
  }

  for (int i = 0; i < palString.length(); i++)
  {
    if (palString[i] == palStack.peek())
    {
      palStack.pop();
    }
    else
    {
      return false;
    }
  }
  return true;
}