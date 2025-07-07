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
    void sumAll(Node* root, int& sum){
        if(root == nullptr) return;
        
        sum += root->data;
        sumAll(root->left,sum);
        sumAll(root->right,sum);
    }
  
    int sumBT(Node* root) {
        int sum = 0;
        sumAll(root,sum);
        
        return sum;
    }
};