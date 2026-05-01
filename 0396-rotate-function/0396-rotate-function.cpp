class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        if( n == 1) return 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        int f0 = 0;
        for(int i = 0; i < n; i++){
            f0 += i*nums[i];
        }
        int maxValue = f0;
        for(int k = n-1 ; k > 0; k--){
            f0 += sum - n * nums[k];
            maxValue = max(maxValue, f0);
        }
        return maxValue;
    }
};