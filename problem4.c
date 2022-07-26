//Problem Code: DPOLY

#include <stdio.h>

int main()
{
    int t, N, cur_max, max;
 
    scanf("%d", &t);
    while(t > 0)
    {
        N = 0, cur_max = 0, max = -1;
        scanf("%d", &N);
        int a[N];
        for (int  i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i =0; i < N; i++)
        {
            if(a[i] != 0)
            {
                cur_max = i;
                if(cur_max > max)
                {
                    max = cur_max;
                }
                
            }
        }

        printf("%d\n", max);

        t--;
    }
    return 0;
}