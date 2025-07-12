//https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/

int Solution::adjacent(vector<vector<int> > &nums) {
    int n=nums[0].size();
    vector<int> maxCol(n);
    for(int i=0;i<n;i++) maxCol[i]=max(nums[0][i],nums[1][i]);
    vector<int> dp(n);
    dp[0]=maxCol[0];
    dp[1]=max(dp[0],maxCol[1]);
    if(n>=2){
        for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],maxCol[i]+dp[i-2]);
        }
    }
    return dp[n-1];
}
