class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> res;
        vector<long long> ans;
        for(int i = 0 ; i < k; i++){
            ans.insert(lower_bound(ans.begin(), ans.end(), nums[i]), nums[i]);
        }
        if(k % 2==0){
            res.push_back( (double) (ans[k/2] + ans[k/2-1])/ 2.0);
        } else {
            res.push_back(ans[k/2]);
        }
        for(int i = k ; i < nums.size();i++){
            ans.erase(lower_bound(ans.begin(), ans.end(),nums[i-k]));
            ans.insert(lower_bound(ans.begin(), ans.end(), nums[i]), nums[i]);
            if(k % 2==0){
                res.push_back( (double) (ans[k/2] + ans[k/2-1])/ 2.0);
            } else {
                res.push_back(ans[k/2]);
            }            
        }
       return res;
    }
};