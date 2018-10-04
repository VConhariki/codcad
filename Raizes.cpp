#include <bits/stdc++.h>
using namespace std;

int main(){

	long double x;
	short int n;
	
	scanf(" %hi", &n);
	
	for(int i=0; i<n; i++){
		
		scanf(" %Lf", &x);
		printf("%.4Lf\n", sqrt(x));
	
	}
}
