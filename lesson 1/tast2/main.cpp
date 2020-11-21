#include <iostream>

using namespace std;

int
main ()
{
  double a = 0, b = 0, d = 0;
  int c = 0;
  cout << "Vvedite 1 chislo! ";
  cin >> a;
  cout << "Vvedite 2 chislo! ";
  cin >> b;
  cout << "Vvedite deistvie ";
  cin >> c;
  switch (c)
    {
    case 1:
      d = a + b;
      break;
    case 2:
      d = a - b;
      break;
    case 3:
      d = a * b;
      break;
    case 4:
      d = a / b;
      break;
    }
  cout << "RESULT";
  cout << d;
}
