#include "TreeOperations.h"
#include <iostream>
#include <vector>

int main() {
    TreeNode* root = nullptr;
    std::vector<int> nodes = {20, 10, 30, 5, 15, 25, 35};

    for (int val : nodes)
        root = insertBST(root, val);

    std::cout << "Minimum value in BST: " << findMinValue(root) << "\n";
    std::cout << "Maximum Depth/Height: " << maxDepth(root) << "\n";

    int k = 2;
    std::cout << "Nodes at distance " << k << ": ";
    printKDistance(root, k);
    std::cout << "\n";

    std::cout << "Leaf Nodes Count: " << countLeafNodes(root) << "\n";

    return 0;
}
