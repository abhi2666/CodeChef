#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;cin>>T;
    int a, b, c;
    while(T--)
    {
        cin>>a>>b>>c;

        if(b < a || b < c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }   
    return 0;
}