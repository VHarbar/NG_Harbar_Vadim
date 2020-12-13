#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int store = 0, max = 0;
    for(int num = 0; num < 20; num++)
    {
        cout << "Enter the number: ";
        cin >> arr[num];
        if (max < arr[num])
            max = arr[num];
        store++;
        if(arr[num] == 0) {
            break;
        }
    }
    for (int num = 0; num < store; num++)
    {
        for (int g = 0; g < max - (arr[num] + g); g++)
        {
            cout << " ";
        }
        for (int g = 0; g != arr[num]; g++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

