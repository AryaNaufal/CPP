#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int data;
    vector<TreeNode*> children;

    TreeNode(int value) : data(value) {}
};

struct Tree {
    TreeNode* root;

    Tree(TreeNode* rootNode) : root(rootNode) {}
};

int main() {
    TreeNode* nodeA = new TreeNode(1);
    TreeNode* nodeB = new TreeNode(2);
    TreeNode* nodeC = new TreeNode(3);

    nodeA->children.push_back(nodeB);
    nodeA->children.push_back(nodeC);

    Tree myTree(nodeA);
    
    delete nodeA;
    delete nodeB;
    delete nodeC;

    return 0;
}
