#include <iostream>
int main()
{
  int input{};
  std::cout << "Which day is today [1 : Monday,...,  7 : Sunday]: ";
  std::cin >> input;
  std::cout << std::endl;
  if (input > 7 || input <= 0)
  {
    std::cout << input << " is not a valid day. Bye!" << std::endl;
  }
  else
  {
    std::cout << "Today is ";
    switch (input)
    {
    case 1:
      std::cout << "Monday";
      break;
    case 2:
      std::cout << "Tuesday";
      break;
    case 3:
      std::cout << "Wednesday";
      break;
    case 4:
      std::cout << "Thursday";
      break;
    case 5:
      std::cout << "Friday";
      break;
    case 6:
      std::cout << "Saturday";
      break;
    case 7:
      std::cout << "Sunday";
      break;
    default:
      std::cout << "Unreachable" << std::endl;
    }
    std::cout << ". Let's have some fun." << std::endl;
  }
}