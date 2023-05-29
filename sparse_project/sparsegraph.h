#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class SparseGraph{
public:

    SparseGraph() {
        // Your code here
        for(int i = 0; i < 3;i++){
            vector<int> v;
            V.push_back(i);
            E.push_back(v);
        }
    }

    SparseGraph(int n_in) {
        // Your code here
        for(int i = 0; i < n_in;i++){
            vector<int> v;
            V.push_back(i);
            E.push_back(v);
        }
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        V = G.V;
        E = G.E;

    }

    void AddEdge(int a, int b) {
        // Your code here
        if (find(E[a].begin(),E[a].end(),b)!=E[a].end())return;
        E[a].push_back(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        auto it = find(E[a].begin(),E[a].end(),b);
        if (it!=E[a].end())E[a].erase(it);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if (find(E[a].begin(),E[a].end(),b)!=E[a].end())return true;
        return false;
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph sg(V.size());
        //vector<vector<int>> Et(V.size())
        for(int i = 0;i<E.size();i++){
            for(int j = 0;j<E[i].size();j++){
                sg.E[E[i][j]].push_back(i);
            }
        }
        return sg;
    }
protected:
    // Your code here
    vector<int> V;
    vector<vector<int>> E;

};
#endif // __SPARSE_GRAPH_H__

