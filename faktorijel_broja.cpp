#include <bits/stdc++.h>

using namespace std;

 
int
main () 
{
    int n;
    int proizvod=1;
    
    std::cout << "Broj:  " << std::endl;
    std::cin >> n ;
    
    for(int brojac=1; brojac<=n; ++brojac)
    proizvod*=brojac;
    std::cout <<"Faktorijel: " <<proizvod<<std::endl;
}