public class Solution {
    public void Rotate(int[] nums, int k) {
        int n = nums.Length;
        k%=n;
        Console.Write(k);
        int[] temp = new int[n];
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }
        Array.Copy(temp, nums, n);
    }
}