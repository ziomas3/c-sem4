#include <iostream>

using namespace std;
int wczytaj_int (int *k)
{
    //std::cout << "jestem w: " << __FUNCTION__ << endl;
    std::cout << k <<endl;
    std::cout << " podaj wartosc n: ";
    std::cin >> *k;
}
void print(int n)
{
    std::cout << "moja wartosc wynosi: " << n << endl;
}
void f(void*p int type)

{
    std::cout << p << endl;
    cout << *reinterpret_cast<int*> (p) << endl;
}
int main()
{
    int n=0;
    f(&n, 0);

    int tab[10]={6,7,1,2,3,4,5,6};
    int tab2[2][2] ={{0,1},{2,3}};
    int * p = &tab[1];
    *p=1;
    p++;
    *p=2;
    //int k = 2[p] a[b] * (a+b);
    p[4]=6; // *(p + 4) = 6
    *(tab+4)=44; // 5 elemetn tablicy (4 w liczeniu od 0)
    std::cout << &tab[6] - &tab[3] << " " << p - tab << endl;
    //p=&n;
    //*p=2;
    //std::cout << "adres n: " << &n << endl;
    //std::cout << "n= " << n << endl;
    wczytaj_int(&n);
    print (n);
    //cout << " teraz n= " << n <<endl;
    float f = 3.14;
        // print(f); //wyslanie liczby zmiennoprzecinkowej do funkcji, ktora uzywa int
    //int kkk=(int)(f);
    //int * pi = (int*) &f;
    int * pi = reinterpret_cast<int*> (&f);
    print (*pi);
    return 0;
}
