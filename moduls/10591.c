

#include<stdio.h>
int main()
{

    int n, i , j , num1 , num2 ,sum =0 , div , mod , val,number;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&val);
            number = val;
            sum = 0;

            while(val<9 || val>9)
                {
                    if(val<=9)
                    {
                    sum=val;
                    break;
                    }

                num2=val;
                while(num2!=0)
                {
                    mod = num2 % 10 ;
                    sum =sum + mod*mod;
                    num2 = num2 / 10;

                }

                val = sum;
                sum=0;
            }

            if(sum==1 || sum==7)
                            printf("Case #%d: %d is a Happy number.\n",i,number);
                            else
                            printf("Case #%d: %d is an Unhappy number.\n",i,number);


        }
    }

    return 0;
}

