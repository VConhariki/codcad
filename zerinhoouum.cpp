#include <bits/stdc++.h>
using namespace std;

int main(){

	int a,b,c;
	
	cin >> a >> b >> c;
	
	if(a==b && b==c) cout << "*\n";
	if(a==b && b!=c) cout << "C\n";
	if(b==c && c!=a) cout << "A\n";
	if(a==c && b!=c) cout << "B\n";
	
	return 0;
}
