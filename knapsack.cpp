// knapsack 0/1 

#include <iostream>
using namespace std;
int main()
{
    int price[5] = {3, 2, 4, 6, 1};
    int weight[5] = {2, 6, 4, 1, 3};
    

    int capacity = 8;
    int mat[6][9] = {0};
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            if(j >= weight[i - 1])
            {
                mat[i][j] = max(price[i] + mat[i - 1][j - weight[i]], mat[i - 1][j]);
                cout<<  mat[i][j]<<endl;

            }
            else
            {
                mat[i][j] = mat[i - 1][j]; 
            }
        }
    }

    cout<<"max profit is "<<mat[6][9]<<endl;
    return 0;
}

// // A dynamic programming based
// // solution for 0-1 Knapsack problem
// #include <bits/stdc++.h>
// using namespace std;

// // A utility function that returns
// // maximum of two integers
// int max(int a, int b)
// {
// 	return (a > b) ? a : b;
// }

// // Returns the maximum value that
// // can be put in a knapsack of capacity W
// int knapSack(int W, int wt[], int val[], int n)
// {
// 	int i, w;
// 	vector<vector<int>> K(n + 1, vector<int>(W + 1));

// 	// Build table K[][] in bottom up manner
// 	for(i = 0; i <= n; i++)
// 	{
// 		for(w = 0; w <= W; w++)
// 		{
// 			if (i == 0 || w == 0)
// 				K[i][w] = 0;
// 			else if (wt[i - 1] <= w)
// 				K[i][w] = max(val[i - 1] +
// 								K[i - 1][w - wt[i - 1]],
// 								K[i - 1][w]);
// 			else
// 				K[i][w] = K[i - 1][w];
// 		}
// 	}
// 	return K[n][W];
// }

// // Driver Code
// int main()
// {
// 	int val[5] = {3, 2, 4, 6, 1};
//     int wt[5] = {2, 6, 4, 1, 3};
// 	int W = 50;
// 	int n = sizeof(val) / sizeof(val[0]);
	
// 	cout << knapSack(W, wt, val, n);
	
// 	return 0;
// }

// // This code is contributed by Debojyoti Mandal
