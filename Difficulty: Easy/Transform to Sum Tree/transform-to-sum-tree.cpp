/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int helper(Node* root){
        if(root==NULL)
        {
            return 0;
        }
        
        int val = root->data;
        int leftSum = helper(root->left);
        int rightSum = helper(root->right);
        
        root->data = leftSum + rightSum;
        return val + leftSum + rightSum;
    }
  
    void toSumTree(Node *root) {
        // code here
        helper(root);
    }
};