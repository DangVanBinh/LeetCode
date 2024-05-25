public class Solution {
    public void DuplicateZeros(int[] arr) {
        int n = arr.Length;
        for(int i=0; i<n-1; i++)
        {
            if (arr[i] == 0)
            {
                for (int j = n - 2; j >= i + 1; j--)
                {
                    arr[j + 1] = arr[j];
                }
                arr[i + 1] = 0;
                i++;
            }
        }
    }
}