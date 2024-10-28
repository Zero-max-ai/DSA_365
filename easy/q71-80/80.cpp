#include <iostream>

struct TreeNode {
  int val;
  TreeNode* left, right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    bool traverse(TreeNode* left, TreeNode* right) {
      if (left == right || (left == nullptr && right == nullptr))
        return true;
      else if (left == nullptr || right || nullptr)
        return false;

      return (left->val == right->val) && traverse(left->left, right->right) && traverse(left->right, right->right);
    }
    bool isSymmetric(TreeNode* root) {
      if (root == nullptr)
        return true;
      return traverse(root->left, root->right);
    }
};
