class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int i = 0, j= 0; 
        int n = nums1.size(); int m = nums2.size();
        for(int k = 0 ; k < n; k++){
            for(int l = 0 ; l < m ; l++){
                if(nums1[k] == nums2[l]){
                    auto it = find(res.begin(), res.end(), nums2[l]);
                    if (it == res.end()){
                        res.push_back(nums2[l]);
                    }
                    break;
                }
            }
        }

        return res;
    }
};