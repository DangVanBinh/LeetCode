class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int left=0;
        int right = a.size() - 1;
        while(left < right){
            int val = a[left] + a[right];
            if(val == target){
                return {left+1, right+1};
            }else if(val < target){
                left++;   
            }else{
                right--;
            }
        }
        return {1,1};
    }
};