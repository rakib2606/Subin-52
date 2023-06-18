#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,c,max,middle,small;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
     {
      max=a;
       if(b>c)
       {
        middle=b;
        small=c;
       }
      else
      {
       middle=c;
       small=b;
      }
    }
   if(b>=a && b>=c)
     {
       max=b;
       if(a>c)
       {
    middle=a;
        small=c;
      }
      else
      {
       middle=c;
       small=a;
      }
    }
   if(c>=b && c>=a)
     {
      max=c;
       if(a>b)
       {
        middle=a;
        small=b;
      }
      else
      {
       middle=b;
       small=a;
      }
    }
  printf("Large number=%d\nMiddle number=%d\nSmall number=%d\n",max,middle,small);
    }
  return 0;
}
