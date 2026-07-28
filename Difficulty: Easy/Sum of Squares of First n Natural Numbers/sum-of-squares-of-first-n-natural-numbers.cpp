class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        if(n==0)
        {
            return 0;
        }
        
        return n*n+sumOfSquares(n-1);
    }
    
    int main(int n)
    {
        cin>>n;
        cout<< sumOfSquares(n)<< endl;
        
    
    }
};