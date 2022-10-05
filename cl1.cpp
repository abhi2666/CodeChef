#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int x;
    while(T--)
    {
        cin>>x;
        if(x < 7) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}