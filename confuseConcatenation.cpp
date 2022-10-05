#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int m = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > arr[m])
            {
                m = i;
            }
        }
        if(m == 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<m<<endl;
            for(int i = 0; i < m; i++)
            {
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
            cout<<n-m<<endl;
            for(int i = m; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}