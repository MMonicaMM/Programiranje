#include <bits/stdc++.h>

using namespace std;

int main () 
{
    string a= "abc" ;
    std::cin >>a;
    int duzina= a.length();
    int res = 0;
    
    for (int brojac=0; brojac < duzina; brojac +=1){
        if(a[brojac]!= 'p'){
            res += 1;
        }
    }
     std::cout <<res<< std::endl;   
}

