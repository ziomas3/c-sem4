#include <algorithm>
#include <vector>

int main()
{
    int tab[] = {2, 3, -1, 0 ,10 , 4, 8 ,90};
    std::vector<int> v {2, 3, -1, 0, 10, 4, 8, 190};
    //kkkstd::sort(v.begin(), v.begin() +2);
    std::sort (v.begin(), v.end());
    std::sort(tab +1, tab +4);
}
