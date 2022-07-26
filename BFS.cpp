// Program to implements BFS using STL libraries

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//Note - pop() never returns any value.

void BFS(int mat[][8], int start)
{
    queue<int> q; //queue created
    int visited[8] = {0};

    visited[start] = 1;
    q.push(start);
    int temp = 0;
    while(!q.empty())
    {
        temp = q.front(); // taking the front element because deletion happens in 
        // queue from front side..
        q.pop();
        for(int i = 1; i < 8; i++)
        {
            if(mat[temp][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                cout<<i<<" ";
                q.push(i);
            }
        }
    }

}
int main()
{
     int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    BFS(A, 4);

    return 0;
}