#include <iostream>

using namespace std;

int main()
{
    char str[255];
    int amount = 1;
    cout << "Enter the string: ";
    cin.getline(str, 255);
    for (int index = 0; str[index+1] != '\0'; index++)
    {
        if((((str[index] >= 'a' &&str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) && !((str[index+1] >= 'a' && str[index+1] <= 'z') || (str[index+1] >= 'A' && str[index+1] <= 'Z'))) || (str[index] >= 'a' &&str[index] <= 'z') && (str[index+1] >= 'A' &&str[index+1] <= 'Z'))
            amount++;
    }
    cout << "Result: " << amount;
    return 0;
}
