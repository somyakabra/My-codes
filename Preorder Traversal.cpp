class Solution {
public:
void Preorder(TreeNode* root, vector<int> &pre){
    if(root == NULL)
    return;

    Pre.push_back(root->val);
    preorder(root->left,pre);
    Preorder(root->right, pre);
}

    vector<int> PreorderTraversal(TreeNode* root) {
        vector<int> pre;
        Preorder(root,pre);
        return pre;
    }
};
