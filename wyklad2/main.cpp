#include <iostream>
#include <cmath>

using namespace std;

int add(int * a, int * b )
{
    return *a + *b;
}


double suma (double (*f)(double),int start, int koniec)
{
    double result= 0.0;
    for (int i = start;i<= koniec ; ++i)
    {
        result += f(i);
    }
    return result;
}

double moja_fun (double x)
{
    return 1.0/x;
}


int main()
{
    //int * q = nullptr; //wskaŸnik zerowy
    // *q = 90; // nie wolno, bo jebnie xD (probuje zalokowac smieci)

    int n;
    std::cout << "podaj n: ";
    std::cin >> n;
    if (n > 10)
        return -1;
    // int * p = new int[n];
    // *p = 90;

    int ** p = new int*[n]; //wskaznik na wskaznik

    for (int i = 0; i < n; i++)
    {
        p[i]= new int[i+1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j<= i ;j++)
        p[i][j] =i*j;
    }


    for (int i = 0; i<n;i++)
    {
        for (int j = 0 ; j<= i ;j++)
        {
            std::cout << p[i][j] << " ";
        }
            std::cout << endl;
    }


 //   for (int i = 0; i < n; i++)
 //       p[i]=i;

    for (int i = 0 ; i < 0 ; i++)
    {
        delete p [i];
    }
    delete [] p;
    p = nullptr;
    delete [] p;
    int k = 90;
    int m = 100;
    std::cout << add(&k,&m)<< endl;
  //  std::cout << *p << endl;
   cout << suma (sin,0,100)<< endl;



    return 0;
}
