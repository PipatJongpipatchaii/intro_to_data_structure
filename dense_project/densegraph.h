#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        for(int i = 0; i < 3;i++){
            V.push_back(i);
        }
    }

    DenseGraph(int n_in) {
        // Your code here
        for(int i = 0; i < n_in;i++){
            V.push_back(i);
        }
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        V = G.V;
        E = G.E;
    }

    void AddEdge(int a, int b) {
        // Your code here
        pair<int,int> e{a,b};
        if (E.find(e)!=E.end())return;
        E.insert(e);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        pair<int,int> e{a,b};
        auto it = E.find(e);
        if (it==E.end())return;
        E.erase(it);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        pair<int,int> e{a,b};
        if (E.find(e)!=E.end())return true;
        return false;
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph dg(V.size());
        for (pair<int,int> e:E){
            pair<int,int> et{e.second,e.first};
            dg.E.insert(et);
        }
        return dg;
    }

protected:
    int n;
    vector<int> V;
    set<pair<int,int>> E;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
