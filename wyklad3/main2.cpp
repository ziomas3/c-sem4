#include <iostream>
#include <cassert>
class Wektor
{
    public:
   /* Wektor (size_t n)
    : size(n)//, p(new int [n])
    {
        p = new int [n];
        std::cout << "hello from " << this<< std::endl;
    }
    Wektor (size_t n, int n0=0)
    : size(n)
    {
        p = new int [n];
       for (size_t i =0; i< n; i++)
        p[i]=n0;
    }

    Wektor ()
    : size(0), p(nullptr)
    {
        std::cout << "default hello from " << this<< std::endl;
    }
    */
    Wektor (size_t n=0, int n0 = 0) //konstrukotr
    :_size(n)
    {
        if (n)
        {
            p= new int[n];
            for (size_t i=0; i<n; i++)
                p[i]= n0;
        }
    }
    Wektor (Wektor const & rhs)
    {
        _size =rhs._size;
        p= new int[_size];
        for (int i=0; i<_size; i++)
            p[i] = rhs[i]; //ponizej to samo ale madrzej zapisane XD
            //this->operator[](i) = rhs[i];
    }

    ~Wektor()       //destruktor
    {
        delete[] p;
        std::cout << "bye from " << this<< std::endl;
    }

    size_t size() const {return _size;}

    void operator= (const Wektor & rhs)
    {
        if (this == &rhs) return;
        _size =rhs._size;
        delete [] p;
        p= new int[_size];
        for (int i=0; i<_size; i++)
            p[i] = rhs[i]; //ponizej to samo ale madrzej zapisane XD
            //this->operator[](i) = rhs[i];
    }

    int operator[] (size_t n) const // const modyfikuje this, ktory dostajemy za darmo. a jest to adres stalego elementu przed . lub lewego elementu
    {
        assert(n < _size); //sprawdza warunek, gdy zly ot sie wywala. dziala tylko w debugu
        return p[n];
    }
    int& operator[] (size_t n)
    {

        assert(n < _size);
        return p[n];
    }
private:
    int * p;
    size_t _size;

};

void f()
{
    int * ptab = new int [30];
    Wektor tab[10];
    Wektor w(100, -9);
    tab[0] = w;
    Wektor ww(10, -1);
    Wektor www(w);

    std::cout << w.size() << " " << w[8] <<std::endl;
}


int main2()
{
    for (int i = 0; i< 100000; i++)
        f();
}
