//Problem Code: CNDLOVE

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int N;
    int a[100], sum = 0;
    while(T--)
    {
        N = sum = 0;
        cin>> N;
        a[N];
        for(int i =0 ; i < N; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum % 2 == 0)
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