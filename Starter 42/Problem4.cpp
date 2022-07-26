// Problem Code: MODULO3

#include <iostream>
using namespace std;
int main()
{
    int T;
    int A, B;
    cin>>T;

    while (T--)
    {
        cin>>A>>B;

        if(A % 3 == 0 || B % 3 == 0)
        {
            cout<<0<<endl;
        } 
        else if(abs(A - B) % 3 == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
       
    }
    
    return 0;
}