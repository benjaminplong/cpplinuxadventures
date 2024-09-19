#include <iostream>
int main()
{
  std::cout << "Please enter a degree value in Celsius: ";
  double celsius{0.0};
  std::cin >> celsius;
  std::cout << celsius << " Celsius is " << (9.0 / 5.0) * celsius + 32 << " Fahrenheit." << std::endl;
}