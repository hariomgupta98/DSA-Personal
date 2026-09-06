#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent;
    vector<int> rank;

    // Find function with Path Compression
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    // Union function with Union by Rank
    // Returns false if the nodes are already in the same set (cycle detected)
    bool unionNodes(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);

        // Cycle detected
        if (rootI == rootJ) {
            return false;
        }

        // Union by Rank
        if (rank[rootI] < rank[rootJ]) {
            parent[rootI] = rootJ;
        } else if (rank[rootI] > rank[rootJ]) {
            parent[rootJ] = rootI;
        } else {
            parent[rootJ] = rootI;
            rank[rootI]++;
        }
        
        return true;
    }

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        
        // The graph nodes are 1-indexed (from 1 to N)
        parent.resize(n + 1);
        rank.resize(n + 1, 0);

        // Initially, every node is its own parent
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }

        // Iterate through the edges
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            
            // If unionNodes returns false, u and v share the same root.
            // This is the redundant connection.
            if (!unionNodes(u, v)) {
                return edge;
            }
        }

        return {};
    }
};

//LC: 684