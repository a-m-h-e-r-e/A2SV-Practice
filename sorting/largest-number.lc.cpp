class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> dp;
        string ans = "";
        for (int i = 0; i < nums.size(); i++) {
            dp.push_back(to_string(nums[i]));
        }
        sort(dp.begin(), dp.end(), [&](const string& a, const string& b) {
            return a + b > b + a;
        });
        for (auto a : dp) ans += a;
        bool allzeros = 1;
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != '0') {
                allzeros = 0;
                break;
            }
        }
        if (allzeros) return "0";
        return ans;
    }
};
