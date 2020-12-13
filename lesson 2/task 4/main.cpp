#include <iostream>

using namespace std;

int main()
{
    int columns[5], max = 0, size[5];
    for (int num = 0; num < 5; num++)
    {
        cout << "Enter the amount of stars in the " << num+1 << " column: ";
        cin >> columns[num];
        if (max < columns[num])
            max = columns[num];
    }
    for (int num = 0; num < 5; num++)
    {
        size[num] = columns[num];
    }
    for (int num = 0; num < max; num++)
    {
        for(int num = 0; num < 5; num++)
        {
            if (size[num] > 0)
            {
                cout << '*';
            }
            if (size[num] <= 0)
                cout <<  ' ';
            size[num]--;
        }

        cout << endl;
    }
}
