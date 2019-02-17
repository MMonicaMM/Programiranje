#include <bits/stdc++.h>

using namespace std;

int main() 
{
  
    string a="123";
    std::cin >> a;
    int duzina = a.length();
    int res = 0;
    for(int brojac = 0; brojac < duzina; brojac += 1)
    {
        if(a[brojac]=='3')
        {
            res += 1;
        }
    }
    
    std::cout << res << std::endl;
}