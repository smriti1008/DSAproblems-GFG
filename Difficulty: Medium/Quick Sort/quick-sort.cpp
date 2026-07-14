class Solution {
  public:
    void quickSort(vector<int>& arr, int start, int end) {
        // code here
        if(start>=end)
        return;
        int pivot = partition(arr, start, end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }

  public:
    int partition(vector<int>& arr, int start, int end) {
        
        // code here
        int position=start;
        for(int i=start;i<end; i++)
        {
            if(arr[i]<=arr[end])
            {
                swap(arr[i],arr[position]);
                position++;
            }
        }
        swap (arr[position], arr[end]);
        return position;
    }
};