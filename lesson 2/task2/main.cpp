#include <iostream>

using namespace std;

int main () {
  int a = 0, b = 0;
  int c[10];
  for (b = 0; b < 10; b++)
    {
      cout << "enter num of school:  ";
      cin >> c[b];
    }
  cout << "Enter number of your school";
  cin >> a;
  for (a = 0; a < 10; a++)
    {
      if (c[b] == a)
	{
	  cout << "I know this";
	  break;
	}
      else
	{
	  cout << "I dont know";
	  break;
	}
    }
  return 0;
}
