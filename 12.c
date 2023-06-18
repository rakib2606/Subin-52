#include <stdio.h>
#include<math.h>
int main()
{
    int n, i,num,t;
    scanf("%d",&t);
    while(t--)
    {
        int  count = 0;
    scanf("%d", &n);
    for (i = 5; i <= n; i=i+5)
    {
        num = i;
        while (num % 5 == 0)
        {
            count++;
            num = num / 5;
        }
    }
    printf("%d\n", count);
    }
    return 0;
}
