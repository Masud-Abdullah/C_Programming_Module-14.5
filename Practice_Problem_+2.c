// *********
//  ******* 
//   *****   n=5;
//    ***   
//     *

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 2 * n - 1;
    int s = 0;

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
        k -= 2;
        s++;
    }
    return 0;
}