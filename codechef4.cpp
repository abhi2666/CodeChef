#include <iostream>
#include <vector>
using namespace std;

// int gcd(int a, int b)
// {
//     int result = min(a, b); 
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result; 
// }

// int min_ele(int start, int end, int a[])
// {
//     //to return the index of min element
//     if(a[start] > a[end])
//     {
//         return start;
//     }
//     else
//     {
//         return end;
//     }
// }

// int main()
// {   
//     int T;cin>>T;
//     int n, gcd_val, min_idx, final_sum;
//     while(T--)
//     {
//         cin>>n;
//         int a[n];

//         for(int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         gcd_val = 0;
//         for(int i = 0; i < n - 1; i++)
//         {
//             min_idx = min_ele(i, i + 1, a);
//             gcd_val = gcd(a[i], a[i + 1]);
//             a[min_idx] = gcd_val;
//         }

//         final_sum = 0;
//         for(int i : a)
//         {
//             final_sum += i;
//         }    

//         cout<<final_sum<<endl;

//     }
//     return 0;
// }



int main()
{
    int T;cin>>T;
    int n, max;
    while(T--)
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        max = -1;

        for(int i :  a)
        {
            if(max < i)
            {
                max = i;
            }
        }

        cout<<max<<endl;
        
    }
    return 0;
}