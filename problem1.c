// Problem Code : PRIZEPOOL

// total participants - 100
#include <stdio.h>

int main()
{
    int t, X, Y; // X - prize for top 10, Y - prize for 11 to 100
    scanf("%d", &t);
    while(t > 0)
    {
        X = Y = 0;
        scanf("%d %d", &X, &Y);

        printf("%d", 10*X+90*Y);

        t--;
    }
    return 0;
}