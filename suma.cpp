#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   std::cin >> n;
   int brojac =1;
   int suma =0;
   
    while (brojac <= n)
    {
        int x;
        cin >> x;
        suma += x;
        brojac += 1;
    }
   std::cout << suma;
}
