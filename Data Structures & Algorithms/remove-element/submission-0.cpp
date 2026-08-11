class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tmp;

        int n = nums.size();


        for(int i = 0; i < n; i++) {
            if(nums[i] != val) {
                tmp.push_back(nums[i]);
            }
        }

        for(int i = 0; i < tmp.size(); i++) {
            nums[i] = tmp[i];
        }

        return tmp.size();
    }
};