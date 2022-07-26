// Problem Code: WATSCORE

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int val, idx, N;
    solution() // constructor
    {
        val = idx = N = 0; // initialized
    }

    int find_score()
    {
        int max_score = 0;
        val = idx = N = 0;
        cin >> N;
        int a[11] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> idx >> val;
            if (val > a[idx])
            {
                a[idx] = val;
            }
        }

        // for(int i = 0; i < 10; i++)
        // {
        //     cout<<i<<" "<<a[i]<<endl;
        // }
        // finding the max_score

        for (int i = 1; i <= 8; i++)
        {
            if (a[i] != 0)
            {
                max_score += a[i];
            }
        }

        return max_score;
    }
};

int main()
{
    solution obj; // object/instance created

    int T;
    cin >> T;
    int val, idx;
    int N;
    while (T--)
    {
        int res = obj.find_score();
        cout << res << endl;
    }

    return 0;
}