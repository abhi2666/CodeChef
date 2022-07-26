// Detect cycle in an Directed Graph
//to be continued..
#include <iostream>
#include <list>
using namespace std;

class graph
{
public:
    
    int vertices;
    list<int> *l; // pointer to list
    graph(int v)
    {
        vertices = v;
        l = new list<int>[vertices];
    }
    void add_edge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void print_graph()
    {
        for(int i = 0; i < vertices; i++)
        {
            for(int nbr: l[i])
            {
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }

    int dfs(int i , int vis[], int rec[])
    {
        vis[i] = 1;
        rec[i] = 1;

        for(int j = 0; j < vertices; j++)
        {
            ///
        }
        
    }

    int iscycle()
    {
        int vis[vertices] = {0};
        int rec[vertices] = {0};
        for(int i = 0; i < vertices; i++)
        {
            if(!vis[i])
            {
                if(dfs(i, vis, rec)) return 1;
            }
        }
        return 0;
    }



};
int main()
{
    int v;
    cin >> v;
    graph g(v);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);

    g.iscycle() ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}