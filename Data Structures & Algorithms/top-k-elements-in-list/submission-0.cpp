class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int num : nums) {
            mpp[num]++;
        }


        vector<pair<int, int>> freq_vec;
        for(const auto& pair : mpp) {
            freq_vec.push_back(pair);
        }

        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
            if(a.second != b.second) {
                return a.second > b.second;
            }

            return a.first > b.first;
        });

        vector<int> result;

        for(int i = 0; i < k && i < freq_vec.size(); i++) {
            result.push_back(freq_vec[i].first);
        }

        return result;
    }
};
