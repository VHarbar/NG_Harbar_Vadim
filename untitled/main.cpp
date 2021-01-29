#include <iostream>

using namespace std;

int Choose(int NumCard)
{
    cout << "Enter card number: ";
    cin>>NumCard;
    return NumCard;
}
int money(int replenishment)
{
    cout << "how much add to card?: ";
    cin >> replenishment;
    return replenishment;
}
int Money_sum(int sum,int replenishment)
{
    sum+=replenishment;
    return sum;
}
void BankSystem(int cards[10],int replenishment, int sum,int NumCard)
{
    for (int num = 1; num < 10; num++)
    {
        cards[num] = 0;
    }
    while (true)
    {
        NumCard = Choose(NumCard);
        replenishment = money(replenishment);
        sum = Money_sum(sum, replenishment);
        cards[NumCard - 1] += replenishment;
    }
}
int main ()
{
    int cards[10];
    int NumCard = 0;
    int sum = 0;
    int replenishment = 0;
    BankSystem(cards, replenishment,sum,NumCard);
    return 0;
}
