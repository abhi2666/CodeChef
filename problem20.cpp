//NOT WORKING YET

#include <iostream>
using namespace std;

int cons(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    int T;
    cout << "enter test cases" << endl;
    cin >> T;
    int n, i, counter;
    string s;
    while (T--)
    {
        n = 0;
        cout << "enter length of string" << endl;
        cin >> n;
        cout << "enter string" << endl;
        cin >> s;
        i = counter = 0;
        while (s[i] != '\0')
        {
            if (cons(s[i])) // if it is constant inc. counter
            {
                counter++;

                if (counter >= 4)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            counter = 0;
            i++;
        }
        
    }
    return 0;
}