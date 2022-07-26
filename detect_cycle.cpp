// detect cycle in an Undirected Graph

#include<bits/stdc++.h>
using namespace std;


int dfs(int start, int mat[][3], int v[], int parent)
{
    v[start] = 1;

    for(int i = 0; i < 3; i++)
    {
        if(!v[i])
        {
            if(dfs(i, mat, v, start)) return true;
        }
        else if(i != parent) return true;
    }
    return false;
}

int is_cycle(int mat[][3], int start)
{
    int visited[3] = {0};
    for(int i = 0;  i < 3; i++)
    {
        if(!visited[i]) // i -
        {
            if(dfs(start, mat, visited, -1)) return true;
        }
    }
    return false;

}

int main()
{
    int mat[3][3] = {{0 , 1, 0},
                     {0, 0,  1},
                     {0, 0,  0}};


    is_cycle(mat, 0)?cout<<"There is a cycle":cout<<"There is no cycle";


    return 0;
}