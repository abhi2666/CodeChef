#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int N, K;
    while (t--)
    {
        N = K = 0;
        cin>>N>>K;
        cout<<N-K<<endl;
    }
    return 0;
}