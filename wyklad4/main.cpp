#include <iostream>
#include <string>

class Animal
{
public:
    Animal()
    : _name ("Jestem No Name")
    {}
        virtual std::string name()const {return "Animal";}

private:
    const std::string _name;
};

class Horse: public Animal
{
public:
    Horse()
    : kopyta(4)
    {

    }
private:
    const int kopyta;
};
void print(Animal * a)

{
    std::cout << a->name() << "\n";
}
int main()
{
    Animal animal;
    Horse siwek;

    std::cout << animal.name()<< std::endl;
    std::cout << siwek.name()<< std::endl;
    std::cout << "Hello world!" << std::endl;
    print (animal);
    print (siwek);
    return 0;
}
