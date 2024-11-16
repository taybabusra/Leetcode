class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0; // Base case: an empty tree has a depth of 0
        }
        
        // Recursively find the maximum depth of the left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        // The depth of the current node is 1 (for the current node) + the maximum of the depths of its subtrees
        return 1 + max(leftDepth, rightDepth);
    }
};
