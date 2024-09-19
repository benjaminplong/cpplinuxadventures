#include <iostream>
int main()
{
  int x{}, y{};

  std::cout << "Welcome to territory control. Please type in your x and y coordinates: ";
  std::cin >> x >> y;
  std::cout << std::endl;
  if (abs(x) <= 10 && abs(y) <= 5)
  {
    std::cout << "You're completely surounded. Don't move!" << std::endl;
  }
  else
  {
    std::cout << "You're out of reach!" << std::endl;
  }
}