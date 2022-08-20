#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int d, m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> d >> m;
    int total_segments = 0;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0; // stores the sum

        if ((i + m) > n)
        {
            break;
        }
        for (int j = 0; j < m; j++)
        {
            sum += a[i + j];

            if(sum == d)
            {
                total_segments++;
            }
        }
    }

    cout << total_segments << endl;

    return 0;
}