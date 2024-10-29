#include <iostream>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int maxDepth(TreeNode* root) {
      if (root == nullptr)
        return 0;

      int lDepth = maxDepth(root->left);
      int rDepth = maxDepth(root->right);
      return lDepth > rDepth ? (lDepth + 1) : (rDepth + 1);
    }
};
