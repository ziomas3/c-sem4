#include <iostream>
#include <string.h>
int main()
{
  char tmp[8];
  char haslo[8];
  strcpy(haslo, "Ta.jne!");
  for ( ; ; )
  {
    std::cout << "podaj hasło: \n";
    std::cin >> tmp;
    if (strcmp(tmp, haslo) == 0)
       break;
    std::cout << "przykro mi, hasło jest niepoprawne!\n";
    std::cout << "\"" << haslo << "\"\n";
  }
  std::cout << "witaj w systemie!\n";
return 0;
}
//ponad 16 znakow zastepuje haslo.
