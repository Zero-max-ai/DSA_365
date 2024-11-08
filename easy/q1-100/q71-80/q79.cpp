#include <iostream>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right (nullptr) {}
};

class Solution {
  public:
    bool traverse(TreeNode*p, TreeNode* q) {
      // first check if any or both pointer are null or not!
      if (p == nullptr && q == nullptr)
        return true;
      else if (p == nullptr || q == nullptr)
        return false;

      return (p->val == q->val) && traverse(p->left, q->left) && traverse(p->right, q->right);
    }

    bool isSameTree(TreeNode *p, TreeNode* q) {
      return traverse(p, q);
    }
};
