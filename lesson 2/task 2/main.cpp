#include <iostream>

using namespace std;

int main ()
{
start:
  int cards[10];
  int NumCard = 0;
  int sum = 0;
  int replenishment = 0;
  char checkbox = 0;
  for (int num = 1; num < 10; num++)
    {
      cards[num] = 0;
    }
  while (true)
    {
      cout << "Enter card number: ";
      cin >> NumCard;
      cout << "how much add to card?: ";
      cin >> replenishment;
      sum += replenishment;
      cards[NumCard] += replenishment;
      for (int index = 1; index < 10; index++)
	{
	  cout << cards[index] << " ";
	}
      cout << endl << "Money on cards: " << sum;
      cout << endl << "Press f to exit or b for restart: ";
      cin >> checkbox;
      if (checkbox == 'b')
	goto start;
      if (checkbox == 'f')
	break;
    }
  return 0;
}

