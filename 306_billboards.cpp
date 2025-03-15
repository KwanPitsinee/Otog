#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int a[10001];
int dp[10001];
int main(){
  int N;
  cin>>N;
  for(int i=1;i<=N;i++){
    cin>>a[i];
  }
  dp[0]=0;
  dp[1]=a[1];
  for(int i=2;i<=N;i++){
    dp[i]=max(a[i]+dp[i-2],0+dp[i-1]);
  }
  cout<<dp[N];
}
/*
10
48 1 3 95 2 1 3 44 22 2
 
dp[0]=0
dp[1]=48 
dp[2]=    1+dp[0]/0+48 ->=dp[1] =48  
dp[3]=  3+dp[1] /0+dp[2]->=dp[2] = 51 
dp[4]= 95+dp[2]/dp[3]  =51
*/
