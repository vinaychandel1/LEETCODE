/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int countNodes(struct TreeNode* t){
      if(t){
		int l=0,r=0;
		l=countNodes(t->left);
		r=countNodes(t->right);
		return (1+l+r);
	}
	return 0;
    
    }
