#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int fact = 1;
    int n = 50;
    while(n > 0)
    {
        fact *= n;
        n--;
    }
    cout<<fact<<" ";
    return 0;
}