#include <iostream>
#include <string>

int main()
{
  std::string location;
  std::cout << "Where do you live?" << std::endl;
  std::cin >> location;
  std::cout << "I've heard great things about " << location << ". I'd like to go sometime." << std::endl;
  return 0;
}