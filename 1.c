#include<stdio.h>
void main()
{
  intx,temp;
  for(x=1;x<100;x++)
  {
    sum=0;
    for(temp=1;temp<x;temp++)
    {
      if(x%temp==0)
      {
        sum=sum+temp;
      }
    }
  }
}
