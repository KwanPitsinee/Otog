//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int cnt;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin>>n;
	int mx=-2000000000;
	
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		
		if(x>mx){
			mx=x;
			cnt=1;
		}
		else if(x==mx){
			cnt++;
		}
	}
	cout<<cnt;
	
}
