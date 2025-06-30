class Solution {
public:
    bool isPalindrome(string s) {
        string low;
        for(auto &it:s){
            if(isalnum(it)) low+=tolower(it);
        }

        int l=0, high=low.size()-1;
        while(l<high){
            if(low[l]!=low[high]) return false;
            l++;
            high--;
        }
        return true;
    }
};
