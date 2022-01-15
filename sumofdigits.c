// w a p to sumogdigits ?

#include<stdio.h>
int main()
{
  int num,i=0,rem=0,sum=0;
  
  printf("enter the number:");
  scanf("%d",&num);
  
  while(num)
  {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
  }
  printf("sum=%d",sum);
}

thank you
