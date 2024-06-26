class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> ans_s;
        unordered_map<char, int> ans_t;
        for(char a : s){
            ans_s[a]++;
        }
        for(char a : t){
            ans_t[a]++;
        }
        for(auto a : ans_s){
            if(ans_t[a.first] != a.second)
                return false;
        }
        return true;
    }
};