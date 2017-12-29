#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

#define N 1000

struct Edge {
    int src, dest;
};

class Graph
{
public:

    list<int> adjList[N];


    Graph(vector<Edge> edges)
    {

        for (unsigned i = 0; i < edges.size(); i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;

            adjList[src].push_back(dest);
            adjList[dest].push_back(src);
        }
    }
};

int BFS(Graph const &graph, int v, vector<bool> &discovered, int &level, vector<int> &length)
{
    queue<int> q;

    discovered[v] = true;

    q.push(v);
    int c = 1;

    while (!q.empty())
    {
        c--;
        v = q.front();
        q.pop();

        length[v] = level*6;

        //cout << v << " "<<level*6<<"\n";
        for (int u : graph.adjList[v])
            if (!discovered[u])
            {
                discovered[u] = true;
                q.push(u);
            }


        if(c==0)
        {
            level++;
            c = q.size();
        }

    }
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        vector<Edge> edges;

        int n,e;
        cin>>n>>e;
        int x,y;


        while(e--)
        {
            Edge t;
            cin>>t.src>>t.dest;
            edges.push_back(t);
        }


        Graph graph(edges);

        int start;

        cout<<"\nstart\n";
        cin>>start;

        vector<bool> discovered(n);
        vector<int> length(n);

        int c=0;

        BFS(graph, start, discovered,c,length);


        //cout<<"BFS Result \n";

        replace(length.begin(),length.end(),0,-1);

        for(int i=1;i<=length.size();i++)
        {
            if(i != start)
                cout<<length[i]<<" ";
        }


        cout<<"\n";
    }


    return 0;
}
