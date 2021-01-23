#include <iostream>

using namespace std;

int main()
{
    char str[255];
    int counter = 1;

    cout << "Enter string: ";
    cin.getline(str, 255);

    for(int num = 0; str[num + 1] != '\0'; num++)
    {
        if(((str[num] >= 'a' && str[num] <= 'z') && !(str[num + 1] >= 'a' && str[num + 1] <= 'z')) || ((str[num] >= 'A' && str[num] <= 'Z') && !(str[num + 1] >= 'A' && str[num + 1] <= 'Z')))
        {
            counter++;
        }
    }

    cout << "Result: " << counter;
}
