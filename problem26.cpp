#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N, index;
    while (T--)
    {
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        // checking
        index = -1;
        for (int i = 0; i < N; i++)
        {
            if(a[i] >= 1 && a[i] <= 7)
            {
                index = i;
            }
        }
        cout<<index+1<<endl;
    }
    return 0;
}