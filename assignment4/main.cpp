#include <iostream>
int main()
{
  int input{};
  std::cout << "Please type in an integral value :";
  std::cin >> input;
  std::cout << std::endl;

  std::cout << input << " is ";
  if (input % 2 == 0)
  {
    std::cout << "even";
  }
  else
  {
    std::cout << "odd";
  }
  std::cout << std::endl;
}