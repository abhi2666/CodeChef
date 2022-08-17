#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int n;
    string s;
    int min;
    while (T--)
    {

        cin >> n;
        int test_cases[n];
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 9999;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> test_cases[i];
        }
        cin >> s;
        // printing the values
        //  for(int i : test_cases)
        //  {
        //      cout<<i<<" ";
        //  }
        //  cout<<endl;
        //  cout<<s<<endl;

        // Main Logic

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {

                arr[i] = test_cases[i];
            }
        }
        min = 9999;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }

        cout<<min<<endl;
    }
    return 0;
}