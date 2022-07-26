// detect cycle in an directed graph

#include <iostream>
#include <vector>
using namespace std;

bool dfs(int mat[][3], int i, int v[], int s[])
{
    int j;
    v[i] = 1;
    s[i] = 1;
    
    for(j = 0; j < 3; j++)
    {
        if(mat[i][j] == 1 && !v[j])
        {
            if(dfs(mat, j, v, s)) return true;
        }
        else if(s[j] == 1)
        {
            return true;
        }
    }
    s[j] = 0;
    return false;
    
}

bool find_cycle(int mat[][3])
{
    // stack will take care of currently visited elements
    int visited[3] = {0}, stack[3] = {0};
    for(int i = 0; i < 3; i++)
    {
        if(!visited[i])
        {
            if(dfs(mat, i, visited, stack)) return true;
        }
    }   
    return false;
}

int main()
{
     int mat[3][3] = {{0 , 0, 0},
                     {0, 0,  0},
                     {0, 0,  0}};

    int res = find_cycle(mat);
    cout<<res<<endl;


    return 0;
}