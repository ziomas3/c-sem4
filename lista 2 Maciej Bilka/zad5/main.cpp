#include <iostream>

using namespace std;

int main()
{
cout <<    sizeof("Ala") <<endl;

cout << sizeof("\"Ala\"")<<endl;

cout << sizeof("\n\n\n")<<endl;

cout << sizeof("Ala ma kota")<<endl;

cout << sizeof("Pięć")<<endl;

cout << sizeof(L"Ala")<<endl;

cout << sizeof(u"gwóźdź")<<endl;

cout << sizeof(u8"Ala")<<endl;

cout << sizeof(u8"Alą")<<endl;
cout << sizeof(U"Ala")<<endl;

cout << sizeof(U"Alą")<<endl;

cout << sizeof("A")<<endl;

cout << sizeof("Ą")<<endl;

cout << sizeof("€")<<endl;

cout << sizeof("0")<<endl;

    return 0;
}
