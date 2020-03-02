#include <iostream>
#include <vector>

using namespace std;

double operator* (std::vector<double> const &x,std::vector<double> const &y)
{
    double temp = 0;
    for (int i = 0; i <x.size(); i++)
    {
        temp +=(x[i]*y[i]);
    }
    return temp;
}

int main()
{
    std::vector <double> w = {1,3,5};
    std::vector <double> v = {3,5,8};
    std::cout << v*w << std::endl;
    return 0;
}
