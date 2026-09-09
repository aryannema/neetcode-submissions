class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zero = 0, res = 0;

        for(char c : s) {
            if(c == '1') {
                ones++;
            }
        }


        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '0') {
                zero++;
            }

            else {
                ones--;
            }

            res = max(res, ones + zero);
        }

        return res;
    }
};