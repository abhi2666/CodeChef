#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    int a, b, x;
    while (T--)
    {
        cin>>a>>b>>x;
        if(abs(a - b) % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    
    return 0;
}