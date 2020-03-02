#include <iostream>
#include <string>
#include <cstdlib>
void error(const char* s)
{
 std::cerr << s << "\nProgram aborted\n";
 exit(-1);
}
double get_double(const char* s)
{
 if (s[0]=='\0') error(" blad ");
 int k=(s[0]=='-' || s[0]=='+')?1:0;
 if(!std::isdigit(s[k])) error ("blad");
 size_t n;
 double result = std::stod(s,&n);
 if(s[n] != '\0') error ("blad");
 return result;
}
int main(int argc, const char* argv[])
{
 if (argc != 4)
 error("Expecting 3 arguments");
 double a = get_double(argv[1]);
 double b = get_double(argv[3]);
 double c;
 switch (argv[2][0])
 {
 case '+': c = a + b; break;
 case '-': c = a - b; break;
 case '*': c = a * b; break;
 case '/': c = a / b; break;
 default: error("unexpected token");
 };
 std::cout << "= " << c << "\n";
}
