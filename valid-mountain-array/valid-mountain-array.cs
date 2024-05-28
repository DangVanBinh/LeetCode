public class Solution {
    public bool ValidMountainArray(int[] arr) {
        int n = arr.Length;
        bool a=true;
        if(n<2)
        {
            return false;
        }
        for(int i=0; (i+1)<n; i++){
            int j=i+1;
            if(arr[i] > arr[j]){
                if(a==false){

                }else{
                    if(i==0){
                        return false;
                    }
                    a=false;
                }
            }else if(arr[i] < arr[j]){
                if(a==true){

                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        if(a==false){
            return true;
        }
        return false;
    }
}