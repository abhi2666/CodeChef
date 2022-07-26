// Problem Code: JOHNY

#include <bits/stdc++.h>
using namespace std;

// k - element whose position is to find after sorting
int main()
{
    int t, n, k;

    cin >> t;
    int ele;
    while(t--)
    {
        ele = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        cin>> k;
        ele = a[k - 1];

        sort(a, a + n);

        for(int i = 0; i < n; i++)
        {
            if(a[i] == ele)
            {
                cout<<i+1<<endl;
            }
        }
        


    }


    return 0;
}