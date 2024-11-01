#include <iostream>
#include <cstdlib>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    bool hasPathSum(TreeNode* root, int targetSum) {
      if (root == nullptr) {
        return false;
      }
      if (root->left == nullptr && root->right == nullptr) {
        return targetSum == root->val;
      }
      return hasPathSum(root, targetSum - root->val) ||
        hasPathSum(root, targetSum - root->val);
    }
};
