// Problem Code: MINFLIPS
//approach 1 
#include <iostream>
using namespace std;
int main()
{
    int T, N, i, c;
    cin >> T;
    while (T--)
    {
        c = 0;
        cin >> N;
        int arr[N];
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        if (N % 2 == 0)  // means even
        {
            for (i = 0; i < N; i = i + 2)
            {
                if(arr[i] + arr[i + 1] != 0)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
        else    // means odd
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}