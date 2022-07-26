#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    int n, x, s, r;
    int curr;
    while(T--)
    {
        cin>>n>>x;
        curr = 0;
        while(n--)
        {
            cin>>s>>r;
            if(s <= x && r >= curr)
            {
                curr = r;
            }
        }
        cout<<curr<<endl;
    }
    return 0;
}