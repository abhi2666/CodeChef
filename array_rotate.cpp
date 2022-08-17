#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int n, k, temp;
    while (T--)
    {
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // rotating

        while (k--)
        {
            temp = a[n - 1];
            int j;
            for (j = n - 1; j >= 0; j--)
            {
                a[j] = a[j - 1];
            }
            a[0] = temp;
        }

        for (int value : a)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}