// Problem Code: XOR_PAL

#include <stdio.h>

int Palin(char str[], int N)
{
    int i = 0, j = N - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            return 0;
        }

        i++;
        j--;
    }
    return 1;
}
int main()
{


    
    int t, N;
    scanf("%d", &t);
    int i, j, c;
    while (t > 0)
    {

        N = 0;
        scanf("%d", &N);
        char str[N];
        scanf("%s", str);
        c = 0;
        i = 0, j = N - 1;
        while (i < j)
        {
            if(Palin(str, N))
            {
                break;
            }
            if (str[i] != str[j])
            {
                str[i] = str[j] = 1;
                c++;
            }
            i++;
            j--;
        }
        printf("%d\n",c/2);

        t--;
    }

    return 0;
}