#include <iostream>

using namespace std;

int main()
{
int i=0;
int max=0;
int start=0;
int counter=0;
char s[500];
cin.getline(s,500);
while (s[i]!='\0')
{
    if ((s[i]!=' ') && (s[i]!='.') && (s[i]!=','))
    {
            counter++;
            if (counter>max)
        {
            max=counter;
            start=i-max+1;
        }
    }
        else
            counter=0;
    i++;
}
max += start;
    cout << "The longest word: ";
    for (int index = start; index < max; index++)
        cout << (s[index]);

    return 0;
}
