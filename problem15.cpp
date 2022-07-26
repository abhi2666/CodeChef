// Problem Code: FIRSTANDLAST

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N, max, i;
    while (T--)
    {
        max = 0;
        cin >> N;
        int a[N];
        for (i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        // main logic
        for (i = 1; i < N; i++)
        {
            if((a[i] + a[i - 1]) > max)
            {
                max = a[i] + a[i - 1];
                
            }
        }
        cout<<max<<endl;
        
    }
    return 0;
}