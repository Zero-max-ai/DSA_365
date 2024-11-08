#include <iostream>
#include <vector>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
    
};

class Solution {
  public:
    std::vector<int> traverse(TreeNode* root, std::vector<int>& res) {
      if (root == nullptr)
        return res;

      traverse(root->left, res);
      res.push_back(root->val);
      traverse(root->left, res);
    }

    std::vector<int> inorderTraversal(TreeNode* root) {
      std::vector<int> res;
      traverse(root, res);
      return res;
    }
};

// no binary tree code here!! so no main func :)
