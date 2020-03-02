#include <iostream>

using namespace std;

int main()
{


//a.
char (*tab) [10];   //wskaznik na tablice
//b.
int taba[10][10];    //tablica 2d
//c.
double (*pf)(double x);// wskaznik na zmienna double zwracjaca double
//d.
double (*pfs)(double); //wskaznik na double zwracajacy double
//e.
void qsort (void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
//f.
void qsort (void*, size_t, size_t , int (*compar)(const void*, const void*));

return 0;
}
