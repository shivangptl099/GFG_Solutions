class Solution {
  public:
    void inorder(Node* root, vector<int> &arr){
        if(!root) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
    bool findTarget(Node *root, int target) {
        vector<int> arr;
        inorder(root, arr);
        int s = 0, e = arr.size() - 1;
        while(s < e){
            if(arr[s] + arr[e] == target) return true;
            else if(arr[s] + arr[e] < target) s++;
            else e--;
        }
        return false;
    }
};
