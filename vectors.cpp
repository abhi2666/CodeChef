#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6, 3);

    int a[3] = {1, 2, 3};
    v.clear(); //to format the vector 
    for (int i = 0; i < 3; i++)
    {
        v.push_back(a[i]); // add elements using these
    }
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << v.size() << endl;
    return 0;
}