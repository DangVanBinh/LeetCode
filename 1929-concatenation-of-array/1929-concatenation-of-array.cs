public class Solution {
    public int[] GetConcatenation(int[] nums) {
        int n = nums.Length;
        int[] ans = new int[n * 2];
        for(int i=0; i<n; i++){
            ans[i+n] = ans[i] = nums[i];
        }
        return ans;
    }
}