class Solution {
public:
    vector<int> intersection(vector<int>& a1, vector<int>& a2) {
        unordered_map<int, int> ans1;
        unordered_map<int, int> ans2;
        vector<int> b;
        for(auto a : a1){
            ans1[a]++;
        }
        for(auto a : a2){
            ans2[a]++;
        }
        for (auto pair : ans1) {
            int element = pair.first;
            if (ans2.find(element) != ans2.end()) {
                b.push_back(element);
            }
        }
        return b;
    }
};