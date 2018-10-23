#include <bits/stdc++.h>
using namespace std;

int main(){


	int n;
	
	scanf(" %d", &n);
	
	if(n==0){
		
		puts("N");
		return 0;
	}
	
	n++;
	
	n-=n&-n;
	
	if(n==0) puts("S");
	else puts("N");

}

