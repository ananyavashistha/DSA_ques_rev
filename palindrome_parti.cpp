class Solution {
public:
    bool is(string s,int start, int end){
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void solve(int ind, string s,vector<vector<string>>&ans,vector<string> &curr){
        if(ind>=s.size()){
            ans.push_back(curr);
            return;
        }
        for(int end=ind;end<s.size();end++){
            if(is(s,ind,end)){
                curr.push_back(s.substr(ind,end-ind+1));
                solve(end+1,s,ans,curr);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>> ans;
        vector<string> curr;
        solve(0,s,ans,curr);
        return ans;
    }
};
