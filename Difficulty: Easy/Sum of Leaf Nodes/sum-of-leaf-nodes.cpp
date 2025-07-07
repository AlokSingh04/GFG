/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void leaf(Node* root, int& sum){
        if(root == nullptr) return;
        
        if(!root->left && !root->right) sum += root->data;
        leaf(root->left,sum);
        leaf(root->right,sum);
    }
  
    int leafSum(Node* root) {
        int sum = 0;
        leaf(root,sum);
        
        return sum;
    }
};