#include <iostream>

using namespace std;

int main()
{
char s;
cout << "Liczba zmiennoprzecinkowa czy calkowita? (c/z): ";
cin >> s;
int a=2;
double b=2;
switch(s)
    {
        case 'z' : cout << a/0; break;
        case 'c' : cout << b/0; break;
    }
    return 0;
}
