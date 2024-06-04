class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> countStr;
        int length = 0;
        if (s.empty())
        {
            return 0;
        }
        for (char c : s)
        {
            countStr[c]++;
        }
        bool check = false;
        for (auto b : countStr)
        {
            if (b.second % 2 == 0)
            {
                length += b.second;
            }
            else
            {
                length += b.second - 1;
                check = true;
            }
        }
        if (check)
        {
            length++;
        }
        return length;
    }
};