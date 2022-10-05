#include <iostream>
#include <vector>
using namespace std;

int vowelHaiKya(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    int T;cin>>T;
    while(T)
    {
        string s;cin>>s;
        int i = 0, count = 0;
        while(s[i] != '\0')
        {
            if(vowelHaiKya(s[i]))
            {
                // if true then inc. counter
                count++;
            }
            else
            {
                count = 0;
            }

            if(count > 2)
            {
                break;
            }
            i++;
        }   
        if(count > 2)
        {
            cout<<"Happy"<<endl;
        }
        else
        {
            cout<<"Sad"<<endl;
        }
        T--;
    }
    return 0;
}