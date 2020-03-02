#include <iostream>
#include <algorithm>
#include <vector>
struct Point
{
 int x, y;
};
std::ostream& operator<<(std::ostream & out, const Point & p)
{
 return out << /* TEN FRAGMENT NALEZY ODTWORZYĆ */;
}
struct Rnd
{
 uint32_t _seed;
 // TEN FRAGMENT NALEŻY ODTWORZYĆ
};
class Generator
{
public:
 Generator(int n = 1)
 : _rnd(n)
 { }
 Point operator()() // Operator funkcyjny
 {
 Point p;
 p.x = _rnd() & 0xfff;
 p.y = _rnd() & 0xfff;
 return p;
 }
private:
 Rnd _rnd;
};
int main()
{
 const int N = 10000000;
 std::vector<Point> v(N);
 std::generate(v.begin(), v.end(), Generator(1));
 for (auto i : {0, 1, 2, 3, 4, 5, 10, 100, N - 1})
 {
 std::cout << "Point[" << i << "] = " << v[i] << "\n";
 }
}
