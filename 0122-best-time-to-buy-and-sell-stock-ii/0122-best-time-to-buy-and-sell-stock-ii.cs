public class Solution {
    public int MaxProfit(int[] prices) {
        int n = prices.Length;
        int res = 0;
        for(int i=1; i<n; i++){
            if(prices[i] > prices[i-1]){
                res += (prices[i] - prices[i-1]);
            }
        }
        return res;
    }
}