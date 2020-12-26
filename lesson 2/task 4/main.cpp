#include <iostream>

using namespace std;

int main()
{
 int columns[5], max = 0;
    for (int NUM = 0; NUM < 5; NUM++)
    {
        cout << "Enter the amount of stars in the " << NUM+1 << " column: ";
        cin >> columns[NUM];
        if (max < columns[NUM]){
            max = columns[NUM];
        }
    }
    for (int K = 0; K< max; K++)
    {
        for(int NUM = 0; NUM < 5; NUM++)
        {
            if (columns[NUM] > K)
                cout <<'*';
            else
                cout <<' ';
        }

        cout << endl;
    }
}

