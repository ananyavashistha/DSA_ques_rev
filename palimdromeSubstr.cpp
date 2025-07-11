class Solution {
public:
    int helper(int i,int j,string s,vector<vector<int>> &dp){
        if(i>=j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]!=s[j]) return dp[i][j]=0;
        return dp[i][j]=helper(i+1,j-1,s,dp);
    }

    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(helper(i,j,s,dp)) ans++;
            }
        }
        return ans;
    }
};
