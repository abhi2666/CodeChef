#include <iostream>
#include <vector>
using namespace std;


int isOne(int h[], int n)
{
    int idx = 0;
    for(int i = 0; i < n; i++)
    {
        if(h[i] > 0)
        {
            idx = i;
            break;
        }
    }
      for(int i = 0; i < n; i++)
    {
        if(h[i] > 0)
        {
            if(i != idx)
            {
                // means there are more elements
                return 0;
            }
       }
    }
    return 1;
}
int removeAll(int hash[], int n, int i)
{
    int c = 0;
    for (int  i = 0; i < n; i++)
    {
        if(hash[i] == i)
        {
            hash[i] = 0;
            c += hash[i];
        }
    }
    return c;
}
int operations(int a[], int n)
{
    int count = 0;

    int hash[n] = {0};
    for (int  i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    int i = 1;
    do
    {
        int res = removeAll(hash, n, i);
        count = count + res;
        i++;
    } while (isOne(hash, n));
    
    return count;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        cout<<operations(a, n)<<endl;


    }
    return 0;
}