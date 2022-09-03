#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int x, p, q;
    while(T--)
    {
        cin>>x>>p>>q;
        cout<< x * (p - q)<<endl;
    }
    return 0;
}