
#include<stdio.h>
int main()
{
    int n, i , j , num1 , num2 ,sum =0 , div , mod , val,number, arr[100];

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        j=0;
       while(n!=0)
                {
                    mod = n %2;
                    arr[j]=mod;
                    j++;
                    n = n / 2;
                }
                sum=0;

                printf("The parity of ");
                for(i=j-1;i>=0;i--)
                {
                    printf("%d",arr[i]);
                    if(arr[i]==1)
                    {
                        sum=sum+1;
                    }
                }
                printf(" is %d (mod 2).\n",sum);
    }


return 0;
}
