/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void left(Node* root, vector<int>& res){
        if(!root || !root->left && !root->right) return;
        
        res.push_back(root->data);
        
        if(!root->left) left(root->right,res);
        else left(root->left,res);
    }
  
    void right(Node* root, vector<int>& res){
        if(!root || !root->left && !root->right) return;
        
        if(!root->right) right(root->left,res);
        else right(root->right,res);
        
        res.push_back(root->data);
    }
  
    void leaf(Node* root, vector<int>& res){
        if(!root) return;
        
        if(!root->left && !root->right) res.push_back(root->data);
        
        leaf(root->left, res);
        leaf(root->right,res);
    }
  
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
    
        if (!root) return res;
        res.push_back(root->data);
        
        left(root->left,res);
        
        leaf(root->left,res);
        leaf(root->right,res);
        
        right(root->right,res);
        
        return res;
    }
};