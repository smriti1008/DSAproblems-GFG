class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int ans =INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>ans)
            ans=arr[i];
        }
        int second= INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            if(ans!=arr[i])
            second = max(second, arr[i]);
        }
        
        if (second == INT_MIN)
        {
            return -1;
        }
        return second;
    }
};