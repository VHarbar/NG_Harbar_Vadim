#include <iostream>

using namespace std;

int main()
{
    int i=0;
    char str[500];
    cout << "Enter string: ";
    cin.get (str, 500);
    for(i=0;str[i]!=0;i++)
        if(str[i]<='z' && str[i]>='a')
            str[i]-=32;
    cout<<str;
}
