#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int i;cin>>i;
        if(i > 100)
        {
            cout<<i - 10<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}