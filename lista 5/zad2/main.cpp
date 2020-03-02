#include <iostream>
using namespace std;
class Complex
{
    private:


    public:
        double Re;
        double Im;

        Complex (int r = 0, int i = 0)
        {
            this->Re=r;
            this->Im=i;
        }

        void setComplex(void)
        {
            cout << "Enter the Re and Iminary parts : ";
            cin >> this->Re;
            cin >> this->Im;
        }
         Complex operator= (const Complex& n)

        {
            Re=n.Re;
            Im=n.Im;
            return Complex(n.Re, n.Im);
        }

        Complex operator+ (const Complex& n)
        {
            return Complex(Re+n.Re, Im+n.Im);
        }

        Complex operator* (const Complex& n)
        {
            return Complex(Re*n.Re-Im, Im*n.Re+Re*n.Im);
        }

        Complex operator+= (const Complex& n)
        {
            Re += n.Re;
            Im += n.Im;
            return Complex (Re, Im);
        }

        Complex operator*= (const Complex& n)
        {
            *this = *this * n;
            return Complex(Re, Im);
        }

        Complex operator- (const Complex& c)
        {
            Complex newComp;
            newComp.Re = this->Re - c.Re;
            newComp.Im = this->Im - c.Im;
            return newComp;
        }

        void printComplex(void)
        {
            cout << "Re      : " << this->Re << endl;
            cout << "Iminary : " << this->Im << endl;
        }
        friend std::ostream& operator <<(std::ostream& strim, const Complex& c);
        double Real() const {return Re;}
        double Imag() const {return Im;}

};
std::ostream&operator <<(std::ostream& strim, const Complex& c)
{
    strim << "(" <<c.Re << "," << c.Im << ")";
    return strim;
}


int main()
{
 const Complex ii(0, 1);
 Complex a[3];
 a[0] = Complex(1, 1);
 a[1] = a[0] + ii;
 a[2] = a[1];
 a[2] += ii;
 a[3] = (0.23 , 3.33);
 Complex d = a[1] * a[2];
 d *= a[0];
 std::cout << a[0];
 for (int i = 1; i < 3; i++)
 std::cout << " * " << a[i];
 std::cout << " = " << d << "\n";
 std::cout << "jednostka urojona œæ¿æŸ = " << ii.Real() << " + "
 << ii.Imag() << "i\n";
return 0;
}
