class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>leftmax(n), rightmax(n);
        int water=0;
        leftmax[0]=arr[0];
        for(int i=1; i<n; i++)
        {
            leftmax[i]=max(leftmax[i-1], arr[i]);
        }
        rightmax[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            rightmax[i]=max(rightmax[i+1], arr[i]);
        }
        for(int i=0; i<n;i++)
        {
            int minheight=min(leftmax[i], rightmax[i]);
            if(minheight-arr[i]>=0)
            water+=minheight-arr[i];
        }
        return water;
        
    }
};