#include <iostream>
#include <math.h>

int fibo1 (int n)
{
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibo1(n-1)+fibo1(n-2);
}
int fibo2 (int n)
{
    (float)n;
    double x= 1.0/sqrt(5.0)*(pow(2.0/(sqrt(5.0)-1.0), n)-pow(-2.0/(sqrt(5.0)+1.0), n)+1);
    return (int)x;
}

int main()
{
    std::cout << fibo1(150) << std::endl;
    std::cout << fibo2(150) << std::endl;
    return 0;
}
