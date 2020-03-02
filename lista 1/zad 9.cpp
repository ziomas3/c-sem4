#include <iostream>
#include <cmath>

using namespace std;

double ta(int i)
{
if (i==0)
    return 1/sqrt(3);
    else
    return (sqrt(pow (ta(i-1),2)+1 )-1)/ta(i-1);
}

double tb(int i)
{
if (i==0)
    return 1/sqrt(3);
    else
    return tb(i-1)/(sqrt(pow (tb(i-1),2)+1 )+1);
}

int main()
{
    for (int i=1;i<=30;i++)
    {
        cout << "Funkcja ta dla i: "<<i<<" oblicza pi= "<<6.0*pow(2,i)*ta(i)<<" gdzie oryginalna wartosc pi wynosi: "<<M_PI<<endl;
        cout << "Funkcja tb dla i: "<<i<<" oblicza pi= "<<6.0*pow(2,i)*tb(i)<<" gdzie oryginalna wartosc pi wynosi: "<<M_PI<<endl;
    }
    cout << "obie funkcje zaczynaja pokazywac dobre przyblizenie od i=9, funkcja b robi to do konca, a funkcja zaczyna sie gubic przy i wiekszym niz 18"<<endl;
   return 0;
}
