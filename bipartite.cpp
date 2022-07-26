#include <iostream>
#include <list>
#include <queue>
using namespace std;
// We will be using adjacency list data structure 
// we will use BFS traversal technique here.

/* Bipartite  - it means you can with the help of exact two colours can colour the
 whole graph following the condition that all neighbour nodes have differnet colour.

 If the above condition is not followed than we can say that the graph is not a 
 Bipartite Graph.
*/


class graph
{
    public:
    int colours[3] = {-1}; // will represent colours
    int V;
    list<int> *l; // l - a list type pointer that will point to array of list
    graph(int V) // to set values
    {
        this->V = V;
        l = new list<int>[V]; // array of list
    }

    void add_edge(int x, int y) //(from where,  to where)
    {
        /// if you are making a undirected graph
        l[x].push_back(y);
        l[y].push_back(x);
    }

    int bfs(int i) // i represents a node that is to be processed
    {
        queue<int> q;
        colours[i] = 1;
        int temp;
        q.push(i);
        while(!q.empty())
        {
            temp = q.front(); // to get the element present in top of queue
            q.pop(); // pop doesn't return anything
            for(auto ele: l[temp])
            {
                if(colours[ele] == -1)
                {
                    colours[ele] = 1 - colours[i]; // always put opposite colours in 
                                                   // each node..
                    // once colour is assigned, remember to push element into queue..
                    q.push(ele);
                }
                else if(colours[ele] == colours[temp]) //means two adjacent nodes have same colour..
                {
                    return false;
                }
            }
        }
        return true;

    }

    int check_bipartite(int vertices)
    {
        for(int i = 0; i < vertices; i++)
        {
            if(colours[i] == -1) // means not coloured yet..then colour it
            {
                if(!bfs(i)) return false;
            }
        }
        return false;
    }

    void print_graph()
    {
        for(int i = 0; i < V; i++)
        {
            for(int nbr: l[i])
            {
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int no_of_vertices = 0;
    cout<<"how many vertices are there"<<" ";
    cin>>no_of_vertices;
    cout<<endl;
    graph g(no_of_vertices); ///creating graph of 3 vertices
    int u, v;

    for(int i = 0; i < no_of_vertices; i++)
    {
        cin>>u>>v;
        g.add_edge(u, v);
    }

    g.check_bipartite(no_of_vertices) ? cout<<"Graph is bipartite":
    cout<<"Graph is no bipartite"; 
    return 0;
}