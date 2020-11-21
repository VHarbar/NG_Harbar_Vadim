#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout << "Skolko oreshkov nuzhno belochke ";
    cin>>a;
    cout << "Skolko oreshkov v odnoy shishke ";
    cin>>b;
    cout << "Skolko shishek bylo sobrano ";
    cin>>c;
    if(c*b>=a){
        cout<<"YES";
    }
    if(c*b<a){
        cout<<"NO";
    }
     return 0;
}
