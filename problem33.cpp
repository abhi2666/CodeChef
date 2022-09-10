#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int n,m,x;
    while (T--)
    {
        cin>>n>>m>>x;
        cout<<(2*(n + m))*x<<endl;
    }
    
    return 0;
}