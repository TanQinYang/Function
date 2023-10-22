#include <stdio.h>
#include <stdlib.h>
int squaresum(int n)
{int i,sum;
sum=0;
for(i=1;i<n;i++)
    sum=sum+i*i;
return sum;
}
int main()
{
int sum1,sum2,sum3;
    sum1=squaresum(12);
    sum2=squaresum(24);
    sum3=squaresum(30);
printf("%d %d %d",sum1,sum2,sum3);
return 0;
}
