class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;

        for(const string& ch : arr) {
            freq[ch]++;
        }


        for(const string& ch : arr) {
            if(freq[ch] == 1) {
                k--;

                if(k == 0) {
                    return ch;
                }
            }
        }

        return "";
    }
};