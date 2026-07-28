class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n==1)
        {
            cout<<1<<" " ;
            return;
        }
        printTillN(n-1);
        cout<<n <<" " ;
    }
    
    int main()
    {
        int n;
        cin>>n;
        printTillN(n);
    }
};