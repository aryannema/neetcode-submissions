class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedXOR = 0;
        for(int i = 0; i <= n; i++) {
            expectedXOR ^= i;
        }


        int actualXOR = 0;
        for(int num : nums) {
            actualXOR ^= num;
        }


        return actualXOR ^ expectedXOR;
    }
};
