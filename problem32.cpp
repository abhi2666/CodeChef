#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    int n, k;
    int zero_count, one_count;
    string a;
    while(T--)
    {
        cin>>n>>k;
        cin>>a;
        zero_count = one_count = 0;
        //counting no of 0s and 1s
        for (int i = 0; i < n; i++)
        {
            if(a[i] == '0')
            {
                zero_count += 1;
            }
            else
            {
                one_count += 1;
            }
        }
        // cout<<zero_count<<" "<<one_count<<endl;
        if(zero_count == one_count)
        {
            cout<<0<<endl;
        }
        else if(one_count > zero_count)
        {
            one_count -= zero_count;
            // process remaining ones
            if(one_count % 2 == 0)
            {
                cout<<(one_count/2)<<endl;
            }
            else
            {
                //odd ones
                cout<<(one_count/2)+1<<endl;
            }
        }
        else if(zero_count > one_count)
        {
            zero_count -= one_count;
            if(zero_count % 2 == 0)
            {
                cout<<(zero_count/2)<<endl;
            }
            else
            {
                //odd ones
                cout<<(zero_count/2)+1<<endl;
            }
        }
        
        
    }
    return 0;
}