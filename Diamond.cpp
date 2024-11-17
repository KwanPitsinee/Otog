//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char c[1005][1005];

void diamond(int n,int x,int y){
    int m=abs(1-(n+1)/2);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int d=abs(i-(n+1)/2)+abs(j-(n+1)/2);
            if(d<=m){
             //c[i][j]='0'+d;
			 	if(d%2==(n/2)%2){
			 		c[i+x][j+y]='*';
				 }
				 else{
				 	c[i+x][j+y]='^';
				 }
				 
			}
			
        }
    }
    c[(n+1)/2+x][(n+1)/2+y]='N';
}

void print(int mn,int kn){
	for(int i=1;i<=mn;i++){
		for(int j=1;j<=kn;j++){
			cout<<c[i][j];
		}
		cout<<'\n';
	}
}

int main() {
   int n,m,k;
   cin>>n>>m>>k;
   memset(c,' ',sizeof c);
   for(int i=0;i<m;i++){
   	for(int j=0;j<k-i;j++){
   		diamond(n,i*n,j*(n-1)+i*(((n-1)/2))-1);
	   }
   }
   print(m*n,k*n);
}
