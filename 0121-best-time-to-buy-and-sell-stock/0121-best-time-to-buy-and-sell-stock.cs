public class Solution {
    public int MaxProfit(int[] prices) {
        int min = prices[0];
        int max = 0;
        int n = prices.Length;
        for(int i=1; i<n; i++){
            if(prices[i] < min){
                min = prices[i];
                Console.Write(min);
            }
            max = Math.Max(max, prices[i]-min);
        }
        return max;
    }
}