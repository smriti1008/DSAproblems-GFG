class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int sum = arr[start] + arr[end];

            if (sum == target) {
                return true;
            }
            else if (sum < target) {
                start++;
            }
            else {
                end--;
            }
        }

        return false;
    }
};