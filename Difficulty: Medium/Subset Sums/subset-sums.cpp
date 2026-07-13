class Solution {
  public:
  
    void print(vector<int>&arr, int n, int sum, int index, vector<int>&ans)
    {
        
        if(index==n)
        {
            ans.push_back(sum);
            return;
        }
        
        print(arr, n, sum, index + 1, ans);
        print(arr, n, sum + arr[index], index + 1, ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        print(arr, n, 0, 0, ans);
        return ans;
    }
};