#include<bits/stdc++>
using namespace std;

int solve(int ind,vector<int> &dp){
  if(ind<0) return 0;
  if(ind==0) return 1;
  if(dp[ind]!=-1) return dp[ind];
  dp[ind]=0;
  for(int i=1;i<=k;i++){
    dp[ind]+=solve(ind-k,dp);
  }
  return dp[ind];
}

int main(){
  int n;
  cin>>n;
  vector<int> dp(n+1,-1);
  return solve(n,dp);
}
