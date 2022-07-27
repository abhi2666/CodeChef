#include <iostream>
using namespace std;
int main()
{

    int T;cin>>T;
    int a, b, c, d, max;
    while(T--)
    {
        max = 0;
        cin>>a>>b>>c>>d;
        if(a > b)
        {
            max += a;
        }
        else
        {
            max += b;
        }
        if(c > d)
        {
            max += c;
        }
        else
        {
            max += d;
        }
        cout<<max<<endl;
    }
    return 0;
}