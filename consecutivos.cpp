#include <bits/stdc++.h>
using namespace std;

long long v[500000];

int main(){

	int n,cont=1,contm=0;
	cin >> n >> v[0];
	
	for(int i=1;i<n;i++){
	
		cin >> v[i];
		if(v[i-1]==v[i]){
			cont++;
			if(contm<cont)
				contm=cont;
		}else{
		
			cont=1;
		
		}
	
	}
	
	cout << contm;
	puts("");
	return 0;

}
