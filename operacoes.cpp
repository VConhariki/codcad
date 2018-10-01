#include <bits/stdc++.h>
using namespace std;

int main(){

	char letra;
	double x,y;
	
	cin >> letra >> x >> y;
	
	if(letra == 'M' || letra == 'm')
		printf("%.2f\n",x*y);
	
	if(letra == 'D' || letra == 'd')
		printf("%.2f\n",x/y);

	return 0;
	
}
