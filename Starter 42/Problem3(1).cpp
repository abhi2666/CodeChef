// Another Approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, i, sum;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> N;
        int arr[N];
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        

        if(N % 2 == 1)
        {
            cout<<-1<<endl;
        }
        else
        {

            if(sum == 0)
            {
                cout<<0<<endl;
            }
            else if(sum < 0)
            {
                cout<<abs(sum/2)<<endl;
            }
            else
            {
                cout<<sum/2<<endl;
            }
        }
    }

    return 0;
}