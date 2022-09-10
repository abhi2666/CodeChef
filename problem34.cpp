#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int w,x,y,z;
    while(T--)
    {
        cin>>w>>x>>y>>z;
        cout<<((w+x*z) - (y*z))<<endl;
    }
    return 0;
}