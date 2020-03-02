#include <iostream>

using namespace std;

int main()
{
int a,b;
    cout << "Podaj a:";
    cin >> a;
    cout  << "Podaj b:";
    cin >> b;
    cout << "Suma: "<< a+b << endl << "Iloczyn: "<< a*b <<endl;
    int i=1;
    for (i=1;i*i!=0;i++);
    cout << "Liczba o wartosci: "<< i << " przy jej kwadracie wyrzucila: 0"<<endl;
    return 0;
}

