//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char c[1005][1005];

void diamond(int n){
    int m=abs(1-(n+1)/2);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int d=abs(i-(n+1)/2)+abs(j-(n+1)/2);
            if(d<=m){
             //c[i][j]='0'+d;
			 	if(d%2==(n/2)%2){
			 		c[i][j]='*';
				 }
				 else{
				 	c[i][j]='^';
				 }
				 
			}
			
        }
    }
    c[(n+1)/2][(n+1)/2]='N';
}

void print(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<c[i][j];
		}
		cout<<'\n';
	}
}

int main() {
   int n;
   cin>>n;
   memset(c,' ',sizeof c);
   diamond(n);
   print(n);
}
