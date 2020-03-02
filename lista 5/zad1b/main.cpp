#include <iostream>
class Samochod
{
 public:
 Samochod (int n)
 : _kola (n), _sruby (4*n)
 {
 std::cout << "Samochód z " << _kola << " ko³ami i "
 << _sruby << " œrubami\n";
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
