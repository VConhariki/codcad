#include <bits/stdc++.h>
using namespace std;
long long n,v[10000],menor=99999999,x,cont=1;;
int main(){
	cin >> n >> x;
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v,v+n);
	if(v[0]==0){
		puts("0\n");
		return 0;
	
	}
	for(int i=0; i<n; i++){
	
		if(v[i]==v[i+1]) cont++;
		else{
			if(menor > cont) menor = cont;
			cont = 1;
			
		}
	
	}
	printf("%lld\n", menor);
}
