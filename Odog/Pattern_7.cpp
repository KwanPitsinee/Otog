#include<bits/stdc++.h>
using namespace std;

char a[3500][3500];
void sq(int m){
	
	for(int i=1;i<=m;i++){
		if(i%2!=0){
			for(int j=i;j<=m-i+1;j++){
				a[i][j]='*';
			}
		}
		
	}
	
	for(int j=1;j<=m;j++){
		if(j%2!=0){
			for(int i=j;i<=m-j+1;i++){
				a[i][j]='*';
			}
		}
	}
	for(int j=m;j>=m/2;j--){
		if(j%2==m%2){
			for(int i=m-j+1;i<=j;i++){
				a[i][j]='*';
			}
		}
	}
}

void print(int m){
	if(m%2==0){
	  for(int i=1;i<=m/2;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
	  for(int i=m/2;i>=1;i--){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
	}
	else{
		for(int i=1;i<=(m/2)+1;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
	  for(int i=m/2;i>=1;i--){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
	
	}
	
	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
 int n;
 cin>>n;
 	memset(a,'-',sizeof a);
 	sq(n);
 	print(n);
}

