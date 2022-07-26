// Program to create adjacency list

#include <iostream>
#include <list>
using namespace std;

class create_graph
{
    public:
    int V;
    list<int> *l; // l - a list type pointer that will point to array of list
    create_graph(int V) // to set values
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
    create_graph g(3); ///creating graph of 3 vertices

    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);

    g.print_graph();    
    return 0;
}