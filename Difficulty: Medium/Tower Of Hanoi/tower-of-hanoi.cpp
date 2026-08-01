class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1)
        {
            // cout<<"move disc "<< n <<" from" <<from <<" to"<<to<<endl;
            return 1;
            
        }
        int left= towerOfHanoi(n-1, from, to, aux);
        // cout<<"move disc"<< n <<" from" <<from <<" to"<<to;
        int right =towerOfHanoi(n-1, aux, from, to);
        return left+1+right;   
    }
    
};