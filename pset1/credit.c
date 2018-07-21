#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    int n[15],i;
    //int sum=0, i,add;
  /*  do
    {
        printf("Number:");
       scanf("%lld",n);

    }
    while(sizeof(n)!=120);*/
        printf("Number:");
       scanf("%d",n);

    for(i=1;i<=15;i+=2)
    {
        //sum=n[i]*2;

 printf("%d\n",n[i]);
        //add=sum/10+sum%10;
        // printf("%d\n",sum);
         //printf("%d\n",add);

    }


    return 0;
}
