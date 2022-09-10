#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
int lcm(int a, int b)
{
    int max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        ++max;
    }
    return -1;
}

int good_pairs(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gcd(a[i], a[j]) == lcm(a[i], a[j]))
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int T;
    cin >> T;
    int n;
    while (T--)
    {

        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << good_pairs(a, n)<<endl;
    }

    return 0;
}