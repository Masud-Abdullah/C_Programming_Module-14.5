//    *
//   ***
//  *****
// *******
// *******  n=4;
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k += 2;
    }
    s = 0;
    k = 2*n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        k -= 2;
    }

    return 0;
}