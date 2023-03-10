// Sample Implementation of Breadth first search code 
//By Raj Motwani

#include <bits/stdc++.h>
#include <list>
using namespace std;

class Graph
{
    int V;

    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undr = true)
    {
        l[i].push_back(j);
        if (undr)
        {
            l[j].push_back(i);
        }
    }

    void bfs(int source)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};
        q.push(source);
        visited[source] = true;
        while (!q.empty())
        {
            int f = q.front();
            cout << f << endl;
            q.pop();
            // pushing the neighbours of current inside q if theey are not already visited
            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};
int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(4, 4);
    g.bfs(1);

    // g.print();
}
