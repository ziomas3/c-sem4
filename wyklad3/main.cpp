#include <iostream>


using namespace std;
struct X
{
    int n;
    double x;
    int tab[4];
    char* p;

    int size() {return 90;}
    X * where_am_I() {return this;} //this podaje adres 1 argumentu
};

int main()
{
    X x= {34, 3.14, {0, 1, 2, 3}, "ala ma kota"};
    x.n = 89;
    x.tab[2] = 12;
    X * p = &x;
    (*p).n = 78;
    p->n = 99;

    cout << x.size() << endl;
    cout << p->size() << endl;
    cout << &x << endl;
    cout << x.where_am_I() << endl; //zawsze 1 argumentem jest to co jest przed . lub ->. W tym wypadku x

    return 0;
}
