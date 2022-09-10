#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int a,x,b,y;
    int s1, s2; // speed
    while(T--)
    {
        cin>>a>>x>>b>>y;
        s1 = a/x;
        s2 = b/y;
        if(s1 > s2)
        {
            cout<<"Alice"<<endl;
        }
        else if(s2 > s1)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Equal"<<endl;
        }

    }
    return 0;
}