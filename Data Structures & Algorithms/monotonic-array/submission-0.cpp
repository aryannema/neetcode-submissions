class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool is_increasing = true;
        bool is_decreasing = true;


        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                is_increasing = false;
            }

            if(nums[i] < nums[i + 1]) {
                is_decreasing = false;
            }

            if(!is_increasing && !is_decreasing) {
                return false;
            }
        }

        return is_increasing || is_decreasing;
    }
};