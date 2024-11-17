//LANG : C++
#include<bits/stdc++.h>
using namespace std;

char c[55][55];

void circle(double n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			double cen=(n+1)/2;
			double r=(n-1)/2;
			double d=((i-cen)*(i-cen))+((j-cen)*(j-cen));
			//if(abs(sqrt(d)-(((n-1)/2)))<=0.5){
			d=sqrt(d);
			if(d>r-0.5 && d<0.5+r){
				c[i][j]='#';
			}
			
			}
		}
	}


void print(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<c[i][j];
		}
		cout<<'\n';
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin>>n;
    memset(c,'-',sizeof c);
    circle(n);
    print(n);
}
