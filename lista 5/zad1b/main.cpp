#include <iostream>
class Samochod
{
 public:
 Samochod (int n)
 : _kola (n), _sruby (4*n)
 {
 std::cout << "Samoch�d z " << _kola << " ko�ami i "
 << _sruby << " �rubami\n";
 }
 private:
 int _sruby;
 int _kola;
};
int main()
{
 Samochod s4 (4);
 Samochod s12 (12);
}
