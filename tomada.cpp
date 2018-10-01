#include <bits/stdc++.h>
using namespace std;

int main(){

	int t[4],total=0,i=0;
	
	while(i<4){
		
		scanf(" %d",&t[i]);
		total+=t[i];
		i++;
	
	}
	
	printf("%d\n",total-3);


}
