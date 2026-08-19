class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> paired;
        for(int i = 0; i < position.size(); i++) {
            paired.push_back({position[i], speed[i]});
        }

        sort(paired.begin(), paired.end(), greater<pair<int, int>>());
        vector<double> ans;

        for(auto& p : paired) {
            ans.push_back((double)(target - p.first) / p.second);

            if(ans.size() >= 2 && ans.back() <= ans[ans.size() - 2]) {
                ans.pop_back();
            }
        }

        return ans.size();
        
    }
};
