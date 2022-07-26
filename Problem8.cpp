// Problem Code: PAWRI

// substr(starting(int), ending(int))- this function is helpful in finding substring in a string
// replace(where to start(int), how many to repalce(int), to repace with what)  
#include <iostream>
using namespace std;
int main()
{   
    int T;
    cin >> T;
    string p = "party";
    string x;
    while(T--)
    {
        string s;
        cin>> s;

        for(int i = 0; i < s.size() - p.size(); i++)
        {
            x = s.substr(i, p.size());
            if(x == p)
            {
                s.replace(i, p.size(), "pawri");
            }
        }
        cout<<s<<endl;
    }



    return 0;
}