#include <bits/stdc++.h>
using namespace std;

int main(){

	int a[3],b[3],i;
	
	for(i=0;i<3;i++)
		cin >> a[i];
		
	for(i=0;i<3;i++)
		cin >>b[i];
		
	if(a[0]>b[0] && a[0] != b[0]){
		printf("A\n");
		return 0;
	}
	if(a[0]<b[0] && a[0] != b[0]){
		printf("B\n");
		return 0;
	}
	if(a[1]>b[1] && a[1] != b[1]){
		printf("A\n");
		return 0;
	}
	if(a[1]<b[1] && a[1] != b[1]){
		printf("B\n");
		return 0;
	}
	if(a[2]>b[2] && a[2] != b[2]){
		printf("A\n");
		return 0;
	} else printf("B\n");
	return 0;
		

}
