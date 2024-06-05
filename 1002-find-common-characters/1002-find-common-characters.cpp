class Solution {
public:
    vector<string> commonChars(vector<string> &a)
    {
        vector<string> result;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int minCount = INT_MAX;
            for (auto w : a)
            {
                int count = 0;
                for (auto c : w)
                {
                    if (c == i)
                    {
                        count++;
                    }
                }
                minCount = min(minCount, count);
            }
            for (int j = 0; j < minCount; j++)
            {
                result.push_back(string(1, i));
            }
        }
        return result;
    }
};