#include <iostream>
using namespace std;
int main()
{

    int T;cin>>T;
    int c;
    while(T--)
    {
        cin>>c;
        if(c > 20)
        {
            cout<<"HOT"<<endl;
        }
        else
        {
            cout<<"COLD"<<endl;
        }
    }
    return 0;
}