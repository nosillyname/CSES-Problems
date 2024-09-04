#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int value;
    vector<Node*> children;
};
 
pair<int, int> dfs(Node* node, int parent) {
    int max_depth = 0;
    int leaf = node->value;
    
    for (auto child : node->children) {
        if (child->value == parent) continue; 
        // auto [depth, far_node] = dfs(child, node->value);
        pair<int, int> dpth_n_leaf = dfs(child, node->value);
        if (dpth_n_leaf.first + 1 > max_depth) {
            max_depth = dpth_n_leaf.first + 1;
            leaf = dpth_n_leaf.second;
        }
    }
 
    return {max_depth, leaf};
}
 
int main() {
    int n;
    cin >> n;
 
    vector<Node> nodes(n);
    for (int i = 0; i < n; i++) {
        nodes[i].value = i;
    }
 
    for (int i = 0; i < n - 1; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        nodes[node1-1].children.push_back(&nodes[node2-1]); 
        nodes[node2-1].children.push_back(&nodes[node1-1]);
    }
 
    pair<int, int> temp = dfs(&nodes[0], -1);
    // auto [a, farthest] = dfs(&nodes[0], -1);
    // auto [max_depth, b] = dfs(&nodes[temp.second], -1);
    temp = dfs(&nodes[temp.second], -1);
 
    cout << temp.first << endl;
}