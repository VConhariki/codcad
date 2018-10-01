#include <bits/stdc++.h>
using namespace std;

int main(){

	int banc,dev, v[25][3],saldo[25],stop=0,x,y;
	
	while(true){	
		cin >> banc >> dev;
		if(banc==0 && dev==0) return 0;
		for(int i=0;i<banc;i++)
			cin >> saldo[i];
		
		for(int i=0; i<dev; i++){
			for(int j=0; j<3; j++)
				cin >> v[i][j];
		}

		for(int i=0; i<dev; i++){
			x=v[i][0];
			y=v[i][1];
			
			saldo[x-1]-=v[i][2];
			saldo[y-1]+=v[i][2];		
		}
		
		stop = 0;
		for(int z=0;z<banc;z++){
				if(saldo[z] < 0){
						stop=1;
						break;			
				}
		}
		if(stop == 1) printf("N\n");
		else printf("S\n");
			
	}
	
}	
