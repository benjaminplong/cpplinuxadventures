#include <iostream>
void print_day(int day)
{
  switch (day)
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
}
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
    int diff{};
    std::cout << "How many days have passed up to today : ";
    std::cin >> diff;
    std::cout << std::endl;
    std::cout << "Today is ";
    print_day(input);
    std::cout << std::endl;
    std::cout << "If we went " << diff << " days in the past we would hit a ";
    int new_day = input - (diff % 7);
    if (new_day <= 0)
    {
      new_day += 7;
    }
    print_day(new_day);
    std::cout << std::endl;
  }
}