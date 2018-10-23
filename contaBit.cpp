#include <bits/stdc++.h>
using namespace std;

int main(){

	int x,cont=0;

	scanf("%d",&x);
	
	while(x){
	
		x-=x&-x;
		printf("%d\n",x);
		cont++; // conta bits 1;
	}
	
	printf("%d\n", cont);
}
