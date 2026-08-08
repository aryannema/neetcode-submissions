class Solution {
private:
    int oneBits(int num) {
        int count = 0;
        while(num) {
            num &= (num - 1);
            count++;
        }

        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> result;

        for(int i = 0; i <= n; i++) {
            result.push_back(oneBits(i));
        }

        return result;
    }
};
