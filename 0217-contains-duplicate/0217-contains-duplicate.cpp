class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> ans;
        for(auto a : nums){
            ans[a]++;
        }
        for(auto b : ans){
            if(b.second >= 2) return true;
        }
        return false;
    }
};