#include<stdio.h>
#include<math.h>
#define size 10000
int main()
{
   int cost[size],area[size],i,j,total,min[3][2],max,mini,t1=0,t2=0,t3,sum;
   for(i=0;i<3;i++)
     scanf("%d",&cost[i]);
   
   for(i=0;i<3;i++)
      scanf("%d",&area[i]);
   for(i=0;i<3;i++)
    for(j=0;j<2;j++)
       scanf("%d",&min[i][j]);
   scanf("%d",&total);
    mini=cost[0];
    max=cost[0];
     
   for(i=1;i<3;i++)
    {
      if(mini>cost[i])
       {  mini=cost[i];
         t2=i;
       }
        if(max<cost[i])
        { max=cost[i];
           t1=i;
        }
    }

   t3=3-(t1+t2);
   mini=t2;
   max=t1;

   t1=min[t1][0]*min[t1][1];
   t2=area[t2];
   t3=(total-(t1+t2));
   t1=t1*cost[max];
   t2=t2*cost[mini];
   t3=t3*cost[(3-(max+mini))];
   sum=t1+t2+t3;
   printf("%d",sum);
   return 0;
}
