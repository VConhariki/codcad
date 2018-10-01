#include <bits/stdc++.h>
using namespace std;

int main(){

        float x,y;
        
        cin >> x >> y;
        
        if((x+y)/2 >= 7){
                printf("Aprovado\n");
                return 0;
        }
        if((x+y)/2 <= 7 && (x+y)/2>=4) printf("Recuperacao\n");
        else printf("Reprovado\n");
        
        return 0;

}
