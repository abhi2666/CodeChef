
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int A, B, N, i, flag, k, temp;
    while (T--)
    {
        A = B = N = i = 0;

        cin >> A >> B >> N;
        flag = 0; // no such element exist
        if (A % B == 0)
        {
            cout << -1 << endl;
            break;
        }
        else
        {
            for (i = 1; i < 99; i++)
            {
                if (i % A == 0 && i % B != 0)
                {
                    flag = 1; // such element exist
                    break;
                }
            }
            k = 1;
            temp = i;
            if (flag == 1)
            {
                while (i <= N)
                {
                    i = temp;
                    i = i * k;
                    k++;
                }
                cout << i << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}