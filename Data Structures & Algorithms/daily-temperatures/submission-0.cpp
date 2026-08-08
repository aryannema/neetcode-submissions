class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> result(temperatures.size(), 0);

        int n = temperatures.size();
        for(int i = 0; i < n; i++) {
            int t = temperatures[i];

            while(!st.empty() && t > st.top().first) {
                auto pair = st.top();
                st.pop();
                result[pair.second] = i - pair.second;
            }
            st.push({t, i});
        }

        return result;
        
    }
};
