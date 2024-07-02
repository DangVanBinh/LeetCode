class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        int l = 0;
        int r = 0;
        while(l < n and r < m){
            if(nums1[l] < nums2[r]){
                l++;
            }else if(nums1[l] > nums2[r]){
                r++;
            }else{
                ans.push_back(nums1[l]);
                l++;
                r++;
            }
        }
        return ans;
        // unordered_map<int , int> mp;
        // vector<int> ans;
        // for(auto a : nums1){
        //     mp[a]++;
        // }
        // for(auto a : nums2){
        //     if(mp[a]>0){
        //         ans.push_back(a);
        //         mp[a]--;
        //     }
        // }
        // return ans;
    }
};