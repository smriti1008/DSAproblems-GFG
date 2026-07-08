class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        if(k>n)
        return -1;
        int start=0,end=0,mid,ans;
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int board=0, count=1;
            for(int i=0;i<n;i++)
            {
                board+=arr[i];
                if(board>mid)
                {
                    count++;
                    board=arr[i];
                }
            }
             if (count <= k) {        
                ans = mid;
                end = mid - 1;       
            } else {
                start = mid + 1;     
            }
        }
        return ans;
    }
};