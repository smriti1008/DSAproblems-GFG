class Solution {
public:
    string sortString(string s) {
        vector<int> alpha(26, 0);

        for (char ch : s) {
            alpha[ch - 'a']++;
        }

        string ans;
        for (int i = 0; i < 26; i++) {
            while (alpha[i]--) {
                ans += char('a' + i);
            }
        }

        return ans;
    }
};