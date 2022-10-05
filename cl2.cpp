#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int n, x;
    while (T--)
    {
        cin>>n>>x;
        if(n == x)
        {
            // means all cards are faced up
            cout<<0<<endl;
        }
        else if(x < (n - x))
        {
            cout<<x<<endl;
        }
        else 
        {
            cout<<(n - x)<<endl;
        }
    }
    
    return 0;
}