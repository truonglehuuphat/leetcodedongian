class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        // int index = 0;
        for(int i = 0; i< nums.size() ;i++){
            ans[(i+k) % nums.size()] = nums[i];
            // index++;
        }

        for(int i = 0; i< nums.size() ;i++){
            nums[i] = ans[i];
            // index++;
        }        
    }
};