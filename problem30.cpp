#include <iostream>
using namespace std;
int main()
{

    int T;cin>>T;
    int n, state; 
    string s, r;
    while(T--)
    {
        cin>>n;
        cin>>s>>r;
        state = 1; // state of the bulb -- initially on
        for (int i = 0; i < n; i++)
        {
            if(s[i] != r[i])
            {
                state *= -1; // -1 represent bulb is off
            }
        }
        if(state == 1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    return 0;
}