#include <iostream>

void allocate (int ***tablica, int n)
{
     *tablica = new int* [n];
    for (int i = 0; i < n; i++)
    {
        *(*tablica + i) = new int [n];
    }
}

void free (int **tablica, int n)
{
    for(int i = 0; i < n; i++)
    {
        delete [] *(tablica +i);
        delete [] tablica;
    }
}

int main()
{
  int** tab = nullptr;
  int n;
  std::cout << "podaj n, n > 0, n <= 10: ";
  std::cin >> n;
  if (!(n > 0 && n <= 10))
    return -1;
  allocate(&tab, n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      std::cout << "t[" << i << "][" << j << "] = " <<  tab[i][j] << " ";
    std::cout << "\n";
  }

  free(tab, n);
}
