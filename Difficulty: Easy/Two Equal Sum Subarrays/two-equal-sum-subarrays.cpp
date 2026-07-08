class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int ans;
        int n=arr.size();
        int totalSum=0;
        for(int i=0; i<n; i++)
        {
            totalSum+=arr[i];
        }
        int prefix=0;
        for(int i=0; i<n-1; i++)
        {
            prefix+=arr[i];
            ans=totalSum-prefix;
            if(ans==prefix)
            {
                return 1;
            }
        }
        return 0;
    }
};
