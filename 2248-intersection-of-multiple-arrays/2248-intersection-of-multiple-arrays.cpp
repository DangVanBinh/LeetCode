class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> m;
        int count = 0;
        for(auto n : nums){
            for(auto a : n){
                m[a]++;
            }
            count++;
        }
        vector<int> ans;
        for(auto a : m){
            if(a.second == count){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};