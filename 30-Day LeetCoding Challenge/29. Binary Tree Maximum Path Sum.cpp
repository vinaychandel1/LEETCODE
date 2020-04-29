/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int max_sum = root->val;
        getMaxSumPath(root, &max_sum);
        return max_sum;
    }
private:
    int getMaxSumPath(TreeNode* node, int* max_sum) {
        if (node == nullptr) return 0;
        auto l = max(getMaxSumPath(node->left, max_sum), 0);
        auto r = max(getMaxSumPath(node->right, max_sum), 0);
        *max_sum = max(*max_sum, node->val + l + r);
        return node->val + max(l, r);
    }
};

/*OR
class Solution {
private:
     int MIN_INT = -2147483648;
    int ans = MIN_INT;
    
public:
    int maxPathSum1(TreeNode* root) {
        if (!root)
            return MIN_INT;
        int ansL = max(0, maxPathSum1(root->left));
        int ansR = max(0, maxPathSum1(root->right));
        ans = max(ans, ansL + ansR + root->val);
        return root->val + max(ansL, ansR);
    }
    int maxPathSum(TreeNode* root) {
         maxPathSum1(root);
        return ans;
    }
};*/
