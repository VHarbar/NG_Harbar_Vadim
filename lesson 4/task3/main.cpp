#include <iostream>

using namespace std;

void StringGet(char str[255])
{
    cin.getline(str,255);
}
void OutInfo(int amount)
{
    cout<<"Result"<<amount;
}
void Counter(char str[255], int amount)
{
    for (int index = 0; str[index+1] != '\0'; index++)
    {
        if((((str[index] >= 'a' &&str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) && !((str[index+1] >= 'a' && str[index+1] <= 'z') || (str[index+1] >= 'A' && str[index+1] <= 'Z'))) || (str[index] >= 'a' &&str[index] <= 'z') && (str[index+1] >= 'A' &&str[index+1] <= 'Z'))
            amount++;
    }
    OutInfo(amount);
}


int main()
{
    StringGet;
    Counter;
    return 0;
}
