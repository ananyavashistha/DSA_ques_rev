class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0,count=0;
        map<int,int> mpp;
        mpp[0]=1;
        for(auto &it:nums){
            sum+=it;
            int mod=sum%k;
            if(mod<0) mod+=k;
            if(mpp.find(mod)!=mpp.end()){
                count+=mpp[mod];
            }
            mpp[mod]++;
        }
        return count;
    }
};
