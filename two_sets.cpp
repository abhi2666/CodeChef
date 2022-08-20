#include <iostream>
#include <vector>
using namespace std;

int for_a(int val, int a[], int n)
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(val % a[i] == 0)
        {
            flag = 1;
        }
        else 
        {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

int for_b(int val, int b[], int m)
{
    int flag = 0;
    for(int i = 0; i < m; i++)
    {
        if(b[i] % val == 0)
        {
            flag = 1;
        }
        else 
        {
            flag = 0;
            return flag;
        }
    }
    return flag;
}


int get_number(int a[], int n, int b[], int m)
{
    int count = 0;
    for(int i = a[n - 1]; i <= b[0]; i++)
    {
        if(for_a(i, a, n) && for_b(i, b, m)) 
        {
            // satisfy both the conditions
            count++;
        }
    }
    
    return count;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    int count= get_number(a, n, b, m);
    cout<<count<<endl;

    return 0;
}