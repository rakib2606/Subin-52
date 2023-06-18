#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)

    {
        char str[10000];
        int i,count=1;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]==' ' && str[i+1]!= ' ')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}