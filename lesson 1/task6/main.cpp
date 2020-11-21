#include <iostream>

using namespace std;

int main ()
{
  int b = 0;
  cout<<"Vvedite razmer";
  cin >> b;
  for (int i = 0; i < b; i++)
    {
      for (int j = 0; j < b; j++)
	cout << "*";
      cout << endl;
    }
  cout << endl;
  for (int i = 0; i <= b; i++)
    {
      for (int j = 0; j < i; j++)
	cout << "*";
      cout << endl;
    }
  cout << endl;
  for (int i = 0; i <= b; i++)
    {
      for (int j = 0; j < b - i; j++)
	cout << "*";
      cout << endl;
    }
  for (int i = b; i > 0; i--)
    {
      for (int j = 0; j < b - i; j++)
	{
	  cout << " ";
	}
      for (int j = 0; j < i; j++)
	{
	  cout << "*";
	}
      cout << endl;
    }

  return 0;
}
