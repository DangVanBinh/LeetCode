class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> ans;
        for(vector<int> a : edges){
            ans[a[0]]++;
            ans[a[1]]++;
        }
        for(auto a : ans){
            int val = a.first;
            int val1 = a.second;
            if(val1 == edges.size())
                return val;
        }
        int kq = 0;
        
        return -1;
    }
};