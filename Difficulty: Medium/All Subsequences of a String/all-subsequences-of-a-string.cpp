class Solution {
public:
    void solve(string &s, int index, string &temp, vector<string> &ans) {
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }

        solve(s, index + 1, temp, ans);

        temp.push_back(s[index]);
        solve(s, index + 1, temp, ans);
        temp.pop_back();   
    }

    vector<string> powerSet(string &s) {
        vector<string> ans;
        string temp = "";

        solve(s, 0, temp, ans);

        sort(ans.begin(), ans.end());

        return ans;
    }
};