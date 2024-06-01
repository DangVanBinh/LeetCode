class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ans = word.find(ch);
        if(ans!=-1){
            reverse(word.begin(), word.begin()+ans+1);
        }
        return word;
    }
};