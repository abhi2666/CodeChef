// NOT WORKING 
#include <iostream>
using namespace std;
int main()
{
    // X -- price (normal burger), Y -- Price (premium), N-- no of burgers
    // R -- total money
    // try to have maximum premium burgers as possible
    int T;cin>>T;
    int X, Y, N, R;
    while(T--)
    {
        X = Y = N = R = 0;
        cin>>X>>Y>>N>>R;

        if(R/Y>= N)
        {
            cout<<"0 "<<N<<endl;
        }
        else if(R/X<N)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int k = (R - (Y*N))/(X - Y);
            if((R - (Y*N))%(X - Y) != 0)
            {
                k++;
                cout<<k<<" "<<N-k<<endl;
            }
        }

    }
    return 0;
}