#include <iostream>

using namespace std;

void kopiuj(char *dokad, const char *skad)

{
  while(*dokad++ = *skad++)
{
  cout << dokad;
  continue;
}
}
int main()
{
    char dokad[10];
    char skad[10];
    kopiuj(dokad,skad);
    return 0;
}
//kopiuje po koleii skad do dokad, skonczy sie gdy bedzie false, a string sie konczy nullem==false
