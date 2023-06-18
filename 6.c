#include<stdio.h>
int main()
{
  int T,N,i,a,e;
  scanf("%d",&T);
  for(i=1;i<=T;i++)
  {
      scanf("%d",&N);
      a=N%10;
      e=N/10000;
      printf("Sum = %d\n",a+e);
  }

    return 0;
}
