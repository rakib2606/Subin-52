#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    char s[10001];
    char c[2];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        scanf("%s",c);
        int count = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(c[0] == s[i])
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("'%c' is not present\n", c[0]);
        }
        else
        {
            printf("Occurrence of '%c' in '%s' = %d\n", c[0], s, count);
        }
    }
}
