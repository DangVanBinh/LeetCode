class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char c : s){
            c = tolower(c);
            if(('a' <= c and c <= 'z') or ('0' <= c and c <= '9')){
                ans += c;
            }
        }
        int left = 0;
        int right = ans.size()-1;
        while(left <= right){
            if(ans[left] != ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};