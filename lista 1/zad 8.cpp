#include <iostream>
#include <cmath>

using namespace std;

void a()
{
    double suma=0.0;
    int n=1000000;
    for (double j=1.0;j<n;j+=2)
        {
            suma+=-1.0/(2.0*j-1.0);
        }
     for (double j=2.0;j<n;j+=2)
        {
            suma+=1.0/(2.0*j-1.0);
        }

        cout <<" a)"<<endl<<4.0*suma<<endl<<M_PI<<endl<<"ujemne pi"<<endl;
}

void b()
{
    double iloczyn=1;
    int n=1000000;
    for (double j=1.0;j<n;j++)
        {
            iloczyn*=(4.0*pow(j,2))/(4.0*pow(j,2)-1);
        }

        cout <<" b)"<<endl<<2.0*iloczyn<<endl<<M_PI<<endl<<"dokladne pi"<<endl;
}

void c()
{
    double suma=0;
    int n=1000000;
    for (double j=1.0;j<n;j++)
        {
            suma+=1/pow(2.0*j-1,2);
        }

        cout <<" c)"<<endl<<sqrt(8.0*suma)<<endl<<M_PI<<endl<<"dokladne pi"<<endl;
}

int main (void)
{
    a();
    b();
    c();
    return 0;
}
