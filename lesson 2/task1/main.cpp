#include <iostream>

using namespace std;

int main ()
{
  int school[10];
  int mySchool = 0;
  int num = 0;
  for (int num = 0; num < 10; num++)
    {
      cout << "Enter school number: ";
      cin >> school[num];
    }
  cout << "Now Enter your school number: ";
  cin >> mySchool;
  for (int num = 0; num < 10; num++)
    {
      if (school[num] == mySchool)
	{
	  cout << "I know this school!";
	  break;
	}
      else if (num == 9)
	{
	  cout << "I don't know this school.";
	}
    }
  return 0;
}
