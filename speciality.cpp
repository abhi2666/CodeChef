#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T)
    {
        int x, y, z;
        cin>>x>>y>>z;
        if(x > y && x > z)
        {
            cout<<"Setter"<<endl;
        }
        else if(y > x && y > z)
        {
            cout<<"Tester"<<endl;
        }
        else
        {
            cout<<"Editorialist"<<endl;
        }
        T--;
    }
    return 0;
}