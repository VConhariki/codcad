#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,p,x,y,cont=0;
	
	cin >> n >> p;
	
	for(int i=0;i<n;i++){
	
		cin >> x >> y;
		
		if((x+y)>=p) cont++;
	
	}
	
	cout << cont;
	puts("");
	return 0;
}
