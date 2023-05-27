class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> dp(200, 0);
       for (auto a : nums) {
           dp[a]++;
       } 
       vector<int> ans(nums.size(), 0);
       for (int i = 1; i < 200; i++) {
           dp[i] += dp[i - 1];
       }
       for (int i = 0; i < nums.size(); i++) {

           if(nums[i] == 0) ans[i] = 0;
            else ans[i] = dp[nums[i] - 1];
       }
       return ans;
    }
};
