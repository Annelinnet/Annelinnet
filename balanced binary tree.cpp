#include<iostream>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      
  };
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        // If the tree is empty, we can say it�s balanced...
        if (root == NULL)  return true;
        // Height Function will return -1, when it�s an unbalanced tree...
		if (Height(root) == -1)  return false;
		return true;
	}
    // Create a function to return the �height� of a current subtree using recursion...
	int Height(TreeNode* root) {
        // Base case...
		if (root == NULL)  return 0;
        // Height of left subtree...
		int leftHeight = Height(root->left);
        // Height of height subtree...
		int rightHight = Height(root->right);
        // In case of left subtree or right subtree unbalanced or their heights differ by more than �1�, return -1...
		if (leftHeight == -1 || rightHight == -1 || (leftHeight - rightHight) > 1)  return -1;
        // Otherwise, return the height of this subtree as max(leftHeight, rightHight) + 1...
		return max(leftHeight, rightHight) + 1;
	}
	
};
	
	
