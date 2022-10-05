#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T)
    {
        int n; cin>>n;
        string s;cin>>s;
        int a = 0, b = s.size() - 1;
        deque<char> str; // double ended queue
        bool flag = true; // true -- alice and false -- bob
        while(a < b)
        {   
            if(flag)
            {
                //alice chance
                if(s[a] == '0')
                {
                    str.push_front(s[a]);
                    a++;
                }
                else
                {
                    str.push_back(s[a]);
                    a++;
                }

            }
            else
            {
                // Bob's Chance
                if(s[b] == '0')
                {
                    str.push_back(s[b]);
                    b--;
                }
                else
                {
                    str.push_front(s[b]);
                    b--;
                }

            }
            flag = !flag; // to switch the flag
        }
        for (auto i = str.begin(); i != str.end(); ++i)
        {
            cout <<*i;
        }
        cout<<endl;
        
        T--;
    }
    return 0;
}