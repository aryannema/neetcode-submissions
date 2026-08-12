class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for(int i = 0; i < arr.size(); ++i) {
            freq[arr[i]]++;
        }

        int maxNum = -1;
        for(auto& [num, freq] : freq) {
            if(num == freq) {
                maxNum = max(maxNum, num);
            }
        }

        return maxNum;
    }


    
};