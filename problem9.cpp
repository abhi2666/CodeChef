// Made by Legendary Roll No. - 01
// Problem Code: COMPRESSVD


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T; //test cases
    cin >> T;
    int N;
    int min_frames = 0;
    while(T--)
    {
        //assuming N can never be 0
        N = 0;
        min_frames = 1;
        cin >> N;
        int a[N];
        //taking elements(obviously)
        for(int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        //checking for minimum frames
        

        for(int i = 1; i < N; i++)
        {
            if(a[i] != a[i - 1])
            {
                min_frames ++;
            }
            
        }

        cout<<min_frames<<endl; 

    }
    


    return 0;
}