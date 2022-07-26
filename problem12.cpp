// Problem Code: ENCMSG
// Encode the string given

#include <bits/stdc++.h>
using namespace std;

void swap(char *p, char *q)
{
    char temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int T, N, i, diff;
    cin >> T;
    string s;
    while (T--)
    {
        N = 0;
        cin >> N;
        cin >> s;

        // Step - 1 of Encoding
        if (N % 2 == 0) // means even lenght
        {
            for (i = 1; i < s.size(); i = i + 2)
            {
                swap(&s[i], &s[i - 1]);
            }
        }
        else // N is odd
        {
            for (i = 1; i < s.size() - 1; i = i + 2)
            {
                swap(&s[i], &s[i - 1]);
            }
        }
        // cout<<s<<endl;
        // Step - 2 of Encoding
        for(i = 0; i < s.size();  i++)
        {
            diff = s[i] - 97;
            s[i] = s[i] + ((122 - diff) - s[i]);
        }
        cout<<s<<endl;
    }

    return 0;
}