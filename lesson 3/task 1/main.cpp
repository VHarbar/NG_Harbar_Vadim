#include <iostream>
#include <string.h>


using namespace std;

int main()
{
 char stroka[500];
 int score= 0,word = 0,i=0;
 cout << "Vvedite stroku: ";
 cin.get(stroka, 500);
 while (stroka[i] != '\0') {
       if (stroka[i] != ' ' && word == 0)
       {
          word = 1;
          score++;
       }
       else if (stroka[i] == ' ')
               word = 0;
               i++;
       }
 cout << "Number words: " << score;
}
