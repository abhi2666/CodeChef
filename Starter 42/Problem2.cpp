// Problem Code: EQUALDIST

#include <iostream>
using namespace std;
int main()
{
    int T;
    int A, B;
    cin>>T;

    while (T--)
    {
        A = B = 0;
        cin>>A>>B;

        if((A+B)%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}