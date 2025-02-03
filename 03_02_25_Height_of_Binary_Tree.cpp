class Solution {
  public:
    // Function to find the height of a binary tree.
    int solve(Node* node){
        if(!node) return 0;
        int l = solve(node->left);
        int r = solve(node->right);
        return 1 + max(l, r);
    }
    int height(Node* node) {
        return solve(node) - 1;
    }
};
