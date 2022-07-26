#include <iostream>
using namespace std;
//input--> x -3, y -12, z -10
int main()
{
    // x -->remaining levels, y-->time to complete each level,
    //z--> break after completing 3 levels each time
    int t;
    cin >> t;
    int x, y, z;
    int c = 0, total_time = 0;
    while (t--)
    {
        total_time = c = 0;
        x=y=z = 0;
        cin>>x>>y>>z;
        //iterate for each level
        for(int i = 1; i <= x; i++)
        {
            
            total_time += y; // adding the normal time
            c++;
            if(c == 3 && i < x)
            {
                total_time += z; // adding the break time
                c = 0;
            }

        }
        cout<<total_time<<endl;
    }
    return 0;
}