class Solution {
public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();

        if (k > n)
            return -1;

        long long start = 0, end = 0;

        for (int x : arr) {
            start = max(start, (long long)x);
            end += x;
        }

        long long ans = -1;

        while (start <= end) {
            long long mid = start + (end - start) / 2;

            int students = 1;
            long long pages = 0;

            for (int x : arr) {
                if (pages + x <= mid) {
                    pages += x;
                } else {
                    students++;
                    pages = x;
                }
            }

            if (students <= k) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};