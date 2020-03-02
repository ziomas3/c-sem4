#include <iostream>
#include <vector>

void swap (int * n, int * m)
{
    int bufor = *n;
    *n = *m;
    *m = bufor;
}

void print (int tab[], int elementy)
{
    for (int i = 0; i < elementy; i++)

    {
        std::cout << tab[i]<<std::endl;
    }
}

void reverse (int tab[], int elementy)
{
    std::vector <int> tab2;
    for (int i = 0; i < elementy; i++)
    {
        tab2.push_back(tab[i]);
    }
    int j = elementy-1;

    for (int i = 0 ; i < elementy; i++, j--)
    {
        tab[i]=tab2[j];
    }
}

int  sum (int * tab, int elementy)
{
    int suma = 0;
    for (int i=0;i < elementy; i++)
        suma+=*(tab+i);
    return suma;
}

int main()
{
 int n = 9, m = 10;
    std::cout << n << " " << m << "\n";
    swap(&n, &m);
    std::cout << n << " " << m << "\n";
 int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 print(tab + 2, 7);
 std::cout << std::endl;
 reverse(tab + 1, 8);
 print(tab, 10);
 std::cout << sum(&tab[8], 2) << "\n"; // suma ostatnich dwóch
 return 0;
}
