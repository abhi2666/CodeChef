// Problem Code: FLOORS

#include <iostream>
using namespace std;
int main()
{
    int x, y, xf, yf;
    x = y = xf = yf;
    int T;
    cin >> T;
    while (T--)
    {
        x = y = xf = yf = 0;
        cin >> x >> y;
        // caculate xth floor and yth floor
        xf = (x - 1)/10 + 1;
        yf = (y - 1)/10 + 1;

        cout<<abs(xf-yf)<<endl;


        
    }
    return 0;
}