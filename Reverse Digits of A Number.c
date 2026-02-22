#include<stdio.h>
#include<math.h>
int main()
{
    int num=123;
    printf("Number:%d \n",num);
    printf("reverce:%d",rev(num));;
    
}
int rev(int num)
{ int lastDigit,rev=0;
  while(num>0)
    {
       lastDigit=num%10;
       rev=rev*10+lastDigit;
       num=num/10;
    }
    return rev;
}