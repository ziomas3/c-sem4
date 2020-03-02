#include <iostream>

using namespace std;
class Rectangle
    {

        public:
            int x=0;
            int przypiszx(int x)
            {
                this->x=x;
                cout << this<< endl;
            }
    };
int main()
{


    Rectangle objekt;
    cout << objekt.x << endl;
    objekt.przypiszx(5);
    cout << objekt.x << endl;
    return 0;
}
