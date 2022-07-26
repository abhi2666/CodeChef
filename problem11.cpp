// Problem Code: PATHPAR
// matrix is square matrix and N - size of matrix.. K - 0 or 1
// Ai,j=i+N⋅(j−1)  for 1≤i,j≤N.

#include <iostream>
using namespace std;

int main()
{
    int T, i, j;
    cin >> T;
    int N, K, C = 0, sum = 0;
    int mat[100][100];
    while (T--)
    {
        N = 0; // size of matrix (N * N)
        K = 0; // k can only be equal to 0 or 1
        cin >> N >> K;
        C = 1;
        mat[N][N];
        // creating the matrix
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                mat[j][i] = C;
                C++;
            }
        }
        // main logic
        // if N = even then it will work for only k = 0 or 1
        // if N = odd then it will work for only k = 1

        if(N % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(K == 1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
return 0;
}