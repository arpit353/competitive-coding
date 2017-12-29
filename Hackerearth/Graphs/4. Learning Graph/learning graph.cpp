#include<bits/stdc++.h>

using namespace std;

int a[1005];

bool cmp(int x,int y)
{
	if(a[x] != a[y])
	{
		return a[x]> a[y];
	}
	else
	{
		return x>y;	
	}
	
}

class Graph
{
	int V;

	list<int> *adj;

    public:

	Graph(int V);

	void addEdge(int v, int w);
    void printGraph(int n,int k);

};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::printGraph(int n,int k)
{
	int v;
	list<int>::iterator i;
	for (v = 1; v <=n; ++v)
	{
		int s = adj[v].size();
		int j=1;	

	adj[v].sort(cmp);

    for(i = adj[v].begin(); i!= adj[v].end();i++)
    {
    	if(j==k)
    	{
    		cout<<*i;
			break;		
		}
		j++;
      
    }
    
    if(adj[v].size() < k)
    {
    	cout<<"-1";
	}

    printf("\n");

	}
}

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	
	Graph g(1005);
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int i,x,y;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		g.addEdge(x,y);
		g.addEdge(y,x);
	}
	
    g.printGraph(n,k);

	return 0;
}

