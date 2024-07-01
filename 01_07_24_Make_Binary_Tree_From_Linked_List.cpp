class Solution {
  public:
  
    TreeNode* makeTree(vector<int>&arr,int i){
        if(i >= arr.size()) return NULL;
        TreeNode* newNode = new TreeNode(arr[i]);
        newNode -> left = makeTree(arr, 2 * i + 1);
        newNode -> right = makeTree(arr, 2 * i + 2);
        return newNode;
    }
    
    void convert(Node *head, TreeNode *&root) {
        vector<int> arr;
        Node* temp = head;
        while(temp){
            arr.push_back(temp -> data);
            temp = temp -> next;
        }
        root = makeTree(arr, 0);
    }
};
