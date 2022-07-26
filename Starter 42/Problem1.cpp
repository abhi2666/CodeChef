// Problem Code: AGELIMIT

#include <iostream>
using namespace std;
int main()
{
    int T;
    int X, Y, N;
    cin>>T;

    while (T--)
    {
        X = Y = N = 0;
        cin>>X>>Y>>N;

        if(N >= X && N < Y)
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