class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(auto &it:intervals){
            int start=it[0],end=it[1];
            if(ans.empty() || ans.back()[1]<start){
                ans.push_back({start,end});
            }else{
                ans.back()[1]=max(ans.back()[1],end);
            }
        }
        return ans;
    }
};
