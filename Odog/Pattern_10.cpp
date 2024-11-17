//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char c[2000][8000];

void O(int n,int x,int y){
	for(int k=1;k<=n;k++){
		for(int i=n+1;i<=(5*n)-n;i++){
			for(int j=n+1;j<=2*n;j++){
				c[i+x][j+y]='#';
			}
			for(int j=(7*n)-(2*n)+1;j<=(7*n)-n;j++){
				c[i+x][j+y]='#';
			}
			
		}
		for(int j=(2*n)+1;j<=5*n;j++){
			for(int i=1;i<=n;i++){
			  c[i+x][j+y]='#';
		    }
			for(int i=(5*n)-n+1;i<=5*n;i++){
			  c[i+x][j+y]='#';
			}	
		}
		
	}
}



void print(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=25*n;j++){
			cout<<'.';
		}
		cout<<'\n';
	}
	for(int i=1;i<=5*n;i++){
		for(int j=1;j<=25*n;j++){
			cout<<c[i][j];
		}
		cout<<'\n';
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=25*n;j++){
			cout<<'.';
		}
		cout<<'\n';
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin>>n;
	memset(c,'.',sizeof c);
	O(n,0,0);
	O(n,0,6*n);
	O(n,0,12*n);
	O(n,0,18*n);
	print(n);
}
