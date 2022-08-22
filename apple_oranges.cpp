#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s, t; //start and terminate
    cin>>s>>t;
    int a, b; //a -- apple tree distance b-- orange tree distance
    cin>>a>>b;
    int m, n;
    int app[m], ora[n];
    // taking elements from user 
    for(int i = 0; i < m; i++)
    {
        cin>>app[i];
    } 

    for(int i = 0; i < n; i++)
    {
        cin>>ora[i];
    } 
    
    // making the array ready for further processing
    int apple_count = 0;
    int orange_count = 0;
    for (int i = 0; i < m; i++)
    {
        app[i] = app[i] + a;
        if(app[i] > s && app[i] < t)
        {
            apple_count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ora[i] = ora[i] + b;
        if(ora[i] > s && ora[i] < t)
        {
            orange_count++;
        }
    }
    cout<<apple_count<<endl;
    cout<<orange_count<<endl;
  
    return 0;
}