#include<stdio.h>
#include<math.h>
int main(){
    int i,n,d=0;
    printf("Enter The Number to count it's Digits:");
    scanf("%d",&n);
    if(n==0){
        printf("Enter Numbers n>0 ");
    }  
    else{
        //int d=BruteForce(n)
        int d=optimal(n);
        printf(" Number=%d\n Digit=%d",n,d);
    }
    
}
int BruteForce(int n)
{
    int count=0;
    while(n>0)
    {
        count=count+1;
        n=n/10;
    }
   return count;

}

int optimal(int n)
{
   int count = (int)(log10(n)+1);
   return count;
}

