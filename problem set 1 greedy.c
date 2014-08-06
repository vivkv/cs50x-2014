cs50x-2014
==========

#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
float change;
int   cent ,counter=0,quartercounter=0,dimecounter=0,nickelcounter=0,left=0;
printf("O hai! How much change is owed?\n");
do{
  change=GetFloat();
  if(change<=0)
   {
     printf("\nenter valid amount of change");
    }
  }while(change<=0);
cent = (int)round(change*100);

cent =(int)round(change*100);
quartercounter = cent/25;
left = cent%25;
dimecounter = left/10;
left = left%10;
nickelcounter = left/5;
left = left%5;    //this will give pennys (1's).. so no need to calculate single penny.
counter = quartercounter+dimecounter+nickelcounter+left;
printf("%d\n",counter);
}
    
