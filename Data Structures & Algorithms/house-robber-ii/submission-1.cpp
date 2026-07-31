class Solution {
private:
    int func(vector<int> &nums) {
        int n = nums.size();
        vector<int> dp(n, 0);

        dp[0] = nums[0];

        for(int i = 1; i < n; i++) {
            int pick = nums[i];
            if(i > 1) {
                pick += dp[i - 2];
            }

            int nonPick = dp[i - 1];
            dp[i] = max(pick, nonPick);
        }

        return dp[n - 1] ;
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;

        if(n == 1) return nums[0];
        
        for(int i = 0; i < n; i++) {
            if(i != n - 1) arr1.push_back(nums[i]);
            if(i != 0) arr2.push_back(nums[i]);

        }

        int ans1 = func(arr1);
        int ans2 = func(arr2);

        return max(ans1, ans2);
    }
};
