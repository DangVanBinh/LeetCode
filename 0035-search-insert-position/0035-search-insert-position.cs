public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int res = nums.Length;
        if(target > nums[res-1]){
            return res;
        }
        for(int i=0; i<nums.Length; i++){
            if(nums[i] >= target){
                res = i;
                break;
            }
        }
        return res;
    }
}