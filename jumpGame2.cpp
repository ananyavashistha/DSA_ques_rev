class sol{
public:
    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if(ind == nums.size() - 1) return 0;  // ✅ Fix here
        if(dp[ind] != -1) return dp[ind];

        int mini = INT_MAX;
        for(int i = 1; i <= nums[ind]; i++) {
            if(ind + i < nums.size()) {
                int temp = solve(ind + i, nums, dp);
                if (temp != INT_MAX)  // ✅ Avoid overflow
                    mini = min(mini, temp + 1);
            }
        }

        return dp[ind] = mini;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};
//o(N^2)

class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,jumps=0;
        while(r<nums.size()-1){
            int maxi=0;
            for(int i=l;i<=r;i++){
                maxi=max(maxi,i+nums[i]);
            }
            l=r+1;
            r=maxi;
            jumps++;
        }
        return jumps;
    }
};
//O(N)
