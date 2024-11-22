class Solution {
public:
    // Helper function to perform DFS and collect leaf values
    void getLeaves(TreeNode* root, vector<int>& leaves) {
        if (!root) return;
        // Check if it's a leaf node
        if (!root->left && !root->right) {
            leaves.push_back(root->val);
        }
        // Recurse on left and right children
        getLeaves(root->left, leaves);
        getLeaves(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        // Collect leaf values for both trees
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        // Compare the two leaf sequences
        return leaves1 == leaves2;
    }
};
