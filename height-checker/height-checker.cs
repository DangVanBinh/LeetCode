public class Solution {
    public int HeightChecker(int[] heights) {
        int n = heights.Length;
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i] = heights[i];
        }
        
        for(int i=0; i<n; i++){
            int minIndex = i;
            for(int j=i+1; j<n; j++){
                if(a[j] < a[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                int temp=a[i];
                a[i]=a[minIndex];
                a[minIndex]=temp;
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(heights[i]!= a[i]){
                count++;
            }
        }
        return count;
    }
}