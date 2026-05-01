class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i = 0, j= 0; 
        int n = nums1.size(); int m = nums2.size();        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i < n && j < m){
            if(nums1[i] == nums2[j]){
                res.push_back(nums2[j]);
                i++;j++;
            } else if(nums1[i] < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        // vector<int> res;
        // for(int x: ans){
        //     res.push_back(x);
        // }
        return res;
    }
};