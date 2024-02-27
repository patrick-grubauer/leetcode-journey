//
// Created by gruba on 2/27/2024.
//

#ifndef P543_H
#define P543_H
#include <ios>

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }

    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {
    }
};


class Solution {
public:
    static int diameter(TreeNode* node, int res, int& sum) {
        int leftCount = node->left ? diameter(node->left, res + 1, sum) : res;
        int rightCount = node->right ? diameter(node->right, res + 1, sum) : res;
        sum = leftCount + rightCount;
        return (leftCount > rightCount) ? leftCount : rightCount;
    }

    static int diameterOfBinaryTree(TreeNode* root) {
        int sum;
        diameter(root, 0, sum);
        return sum;
    }
};
#endif //P543_H
