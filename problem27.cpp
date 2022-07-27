#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    int n, m , k, flag;
    while(T--)
    {
        cin>>n>>m>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        //check if all are solved
        flag = 1; 
        for (int i = 0; i < n; i++)
        {
            if(a[i] != 1)
            {
                flag = 0; // not all test cases are passed
            }
        }
        if(flag == 1)
        {
            cout<<100<<endl;
        }
        else
        {
            flag = 1;
            for (int i = 0; i < m; i++)
            {
                if(a[i] != 1)
                {
                    flag = 0;
                }
            }
            if(flag == 1)
            {
                cout<<k<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            
        }

    }
    return 0;
}