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
    int minDepth (TreeNode* root) {
      if (root == nullptr) {
        return 0;
      }
      if (root->left == nullptr) {
        return 1 + minDepth(root->right);
      }
      if (root->right == nullptr) {
        return 1 + minDepth(root->left);
      }
      return 1 + std::min(minDepth(root->left), minDepth(root->right));
    }
};
