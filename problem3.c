// Problem Code: HIGHSCORE

#include <stdio.h>

int main()
{
    int t, N, a, b, c, d;
    scanf("%d", &t);
    int max;
    while (t > 0)
    {
        N;
        scanf("%d", &N);
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &a[i]);
        }

        max = -1;
        for(int i  = 0; i < 4; i++)
        {
            if(max < a[i])
            {
                max = a[i];
                
            }
        }
        printf("%d\n", max);

        
        t--;
    }
    return 0;
}