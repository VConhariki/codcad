#include <bits/stdc++.h>
using namespace std;
#define T 100100
vector<int>  v[T];
bool visit[T];

int dfs(int x){

	int alt=0, aux;
	visit[x] = 1;
	for(int i =0; i < v[x].size();i++){
	
		if(!visit[v[x][i]]){
		
			aux = dfs(v[x][i]);
			if(alt == 0) alt = aux;
			else{
			
				if(aux != alt){
				
					puts("mal");
					exit(0);
				
				}
			
			}
		
		
		}
	
	
	}


	return alt*(v[x].size()-1) +1;
}



int main(){

	int n, a ,b;
	
	cin >> n;
	
	for(int i =0; i<n; i++){
	
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(0);
	puts("bem");

}
