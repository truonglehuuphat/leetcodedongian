class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        int i = 0, j= 0; 
        int n = nums1.size(); int m = nums2.size();
        // for(int k = 0 ; k < n; k++){
        //     for(int l = 0 ; l < m ; l++){
        //         if(nums1[k] == nums2[l]){
        //             auto it = find(res.begin(), res.end(), nums2[l]);
        //             if (it == res.end()){
        //                 res.push_back(nums2[l]);
        //             }
        //             break;
        //         }
        //     }
        // }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i < n && j < m){
            if(nums1[i] == nums2[j]){
                ans.insert(nums2[j]);
                i++;j++;
            } else if(nums1[i] < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        vector<int> res;
        for(int x: ans){
            res.push_back(x);
        }
        return res;
    }
};