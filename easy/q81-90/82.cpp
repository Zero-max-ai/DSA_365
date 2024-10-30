#include <iostream>
#include <algorithm>
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
    int traverse(TreeNode* root) {
      if (root == nullptr)
        return 0;

      int lDepth = traverse(root->left);
      if (lDepth == -1)
        return -1;

      int rDepth = traverse(root->right);
      if (rDepth == -1)
        return -1;

      if (std::abs(lDepth - rDepth) > 1)
        return -1;

      return std::max(lDepth, rDepth) + 1;

    }
    bool isBalanced(TreeNode* root) {
      return traverse(root) != -1;
    }
};
