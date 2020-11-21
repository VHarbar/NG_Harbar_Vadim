#include <iostream> 

using namespace std;

int main(){
  int b;
  cin >> b;
  for (int i = 0; i < b - 1; i++)
    {
      for (int j = i; j < b; j++)
	cout << " ";
      for (int k = b; k >= b - (2 * i); k--)
	cout << '*';
      cout << endl;
    }
  for (int j = 1; j <= b; j++)
    {
      cout << " ";
    }
  cout << "*";
  return 0;
}

