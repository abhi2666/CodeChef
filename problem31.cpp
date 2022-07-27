// PARTIALLY WORKING
#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    int a, b, c;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a != b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(c >= b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}