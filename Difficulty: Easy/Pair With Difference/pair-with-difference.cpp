
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int start=0, end=1;
        while(end<n)
        {
            {
                if(start==end)
                end++;
            }
            int diff=arr[end]-arr[start];
            if(diff==x)
            {
                return true;
            }
            else 
            {
                if(diff<x)
                {
                    end++;
                }
                else
                {
                    start++;
                }
            }
        }
        return false;
    }
};
