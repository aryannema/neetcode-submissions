class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;

        int carry = 0;

        while(n1 >= 0 || n2 >= 0 || carry) {
            if(n1 >= 0) {
                carry += a[n1--] - '0';
            }

            if(n2 >= 0) {
                carry += b[n2--] - '0';
            }

            ans += carry % 2 + '0';
            carry /= 2;
        }

        ranges::reverse(ans);

        return ans;
    }
};