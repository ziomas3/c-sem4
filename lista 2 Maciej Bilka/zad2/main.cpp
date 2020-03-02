#include <iostream>

using namespace std;

int main()
{
    int tab [10] = {0,1,2,3,4,5,6,7,8,9};
    int* p = &tab[5];
//a.
tab[1]; //1
//b.
*tab; //adres 0 elementu tab
//c.
*(tab+1); // adres 1 elementu tab
//d.
*p;
//e.
p[0];
//f.
p[3];
//g.
*(p+3);//8
//h.
*(p-1);//4
//i.
p[-1];//4
//j.
*&tab[0]; //0
//k.
&tab[5] - &tab[0]; //5
//l.
&tab[0] - tab ;
//m.
1[p]; //zło ale zadziala jako p[1]
//n.
*(1+p);  //6
//o.
p - tab; //5
//p.
tab - p; //-5
//q.
(char*)tab - (char*)p ; //-5 * rozmiar inta = -20
//r.
((char*)tab - (char*)p)/sizeof(int); //4
//s.
((char*)tab - (char*)p)/sizeof(*p); //4
//t.
//(void*)tab - (void*)p; // nie working
    return 0;
}
