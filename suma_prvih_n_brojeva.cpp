#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int suma=0,n;
    
    cout<<"Broj: ";
    cin>>n;
     
    for(int brojac=1;brojac<=n;++brojac)
        suma+=brojac;
        
    cout<<"Suma: "<<suma<<endl;
}