#include <iostream>
int main()
{
  int input{};
  std::cout << "Please type in your age:";
  std::cin >> input;
  std::cout << std::endl;

  if (input < 21)
  {
    std::cout << "Sorry, you are too young for the treatment." << std::endl;
  }
  else if (input > 39)
  {
    std::cout << "Sorry, you are too old for the treatment." << std::endl;
  }
  else
  {
    std::cout << "You are eligible for the treatment." << std::endl;
  }
}