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
    bool isValid(TreeNode *node, vector<int> &arr, int i){
     if(node->val!=arr[i]) return false;
     if(i==arr.size()-1)
         return node->left==NULL && node->right==NULL;
     if(node->left!=NULL && isValid(node->left,arr,i+1)){
         return true;
     }
      if(node->right!=NULL && isValid(node->right,arr,i+1)){
         return true;
     }
     return false;
     
 }
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(root==NULL)
return arr.size()==0;
        return isValid(root,arr,0);
    }
};



/*OR
class Solution {
public:
    bool check(TreeNode* node, vector<int>& arr, int idx) {
        if (node == NULL) return false;
        if (node->val != arr[idx]) return false;
        if (idx + 1 == arr.size())
            return node->left == NULL && node->right == NULL;
        return check(node->left, arr, idx+1) || check(node->right, arr, idx+1);
    }

    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return check(root, arr, 0);
    }
};
*/
