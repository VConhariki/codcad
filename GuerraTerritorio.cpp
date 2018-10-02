#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,T[100005],total=0,sub=0;
	
	cin >> n;
	
	for(int i=0; i<n ; i++){
		cin >> T[i];
		total+= T[i];
	}
	
	for(int i=0;i<n;i++){
		
		sub+=T[i];
		
		if(sub==total/2){
			printf("%d\n",i+1);	
			exit(0);
		
		}
	}

}
