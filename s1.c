#include <stdio.h>
void main()
{
   int time,i=0,sum=0;
   char rp;
   while(i<10)
   {
      printf("is your working hour more than 40 hours;\n");
      scanf("%c",&rp);
      if(rp=='y')
      {
         printf("enter ur extra working hour;\n");
         scanf("%d",&time);
         printf("\nur overtime payment == %d",12*time);
      }
     else
       continue;
     
     sum=sum+12*time;
     i++;
   }
  printf("\nthe total overtime payment of 10 employee == %d",sum);
}
