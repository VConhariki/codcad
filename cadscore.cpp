#include <bits/stdc++.h>
using namespace std;

int main(){

	int ponto=0, fase, n;
	
	cin >> ponto >> fase;
	
	for(int i=0; i<fase; i++){
	
		cin >> n;
		ponto+=n;
		if(ponto>100) ponto = 100;
		if(ponto<0) ponto = 0;
	}
	
	cout << ponto;
	puts("");


}
