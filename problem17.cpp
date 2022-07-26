#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x1, x2, y1, y2;
    while (t--)
    {
        x1 = x2 = y1 = y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 + y1 > x2 + y2)
        {
            cout << x2 + y2 << endl;
        }
        else if (x1 + y1 < x2 + y2)
        {
            cout << x1 + y1 << endl;
        }
        else
        {
            cout << x1 + y1 << endl;
        }
    }
    return 0;
}