#include <bits/stdc++.h>
using namespace std;

int main(){

	int v[6],pc,pf;
	
	for(int i=0; i<6; i++)
		cin >> v[i];
		
	pc=v[0]*3 + v[1];
	pf=v[3]*3 + v[4];
	
	if(pc > pf) printf("C\n");
	else
		if(pc != pf) printf("F\n");
			else
				if(v[2]>v[5]) printf("C\n");
					else
						if(v[2]!=v[5]) printf("F\n");
							else printf("=\n");
	return 0;							

}
