#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=4;
 
    while(n!=5){
        int n;
        std::cin >>n ;
        
       if(n<5){
        std::cout <<"Manji"<< std::endl;
    }
    
    if(n>5){
        std::cout <<"Veci"<< std::endl;
    }
    
    if(n==5){
        std::cout <<"Bravo!!"<< std::endl;
        break;
    }
    }
}
