#include <bits/stdc++.h>

int main () 
{
    int n;		
	int k;      
	printf("Unesite broj n(n>1): ");
	scanf("%d", &n);
	if(n%2==0 && n!=2){
		printf("Broj nije prost!\n");
	}
	else{
			k=3;
			while(k <= n/2){
			
				if( n%k==0){
					printf("Broj nije prost!\n");
					break;
				}
				k=k+2;
			}
		if(k>n/2)
			printf("Broj je prost!\n");
	}
	return 0;
}

