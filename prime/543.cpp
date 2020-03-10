#include<stdio.h>
#include<math.h>
#define N 1000000
char P[N];
void  sieve( );
int main()
{
      sieve();
      int a=0,i,j,n=40,temp,flag,op1,op2;
      while(scanf("%d",&n)==1 && n>=6 && n<=1000000){
                  if(n==0)
                        break;
            else{
                        for(i=2;i<n;i++){
                              flag=0;
                              op1=n-i;
                              if(P[op1]==1){
                                    if(P[i]==1){
                                          op2=i;
                                          flag=1;
                                          break;
                                    }
                              }
                        }

                        if(flag==1)
                              printf("%d = %d + %d\n",n,op2,op1);
                              else
                              printf("Goldbach's conjecture is wrong.\n");
            }
            }

             return 0;
}

void sieve( )
{
      int i,j,root;
           for(i=0;i<N;i++)
                  P[i]=1;
                  P[0]=P[1]=0;
      root=sqrt(N);
                  for(i=2;i<=root;i++)
                              if(P[i]==1){
                                    for(j=2;i*j<=N;j++)
                                          P[i*j]=0;
                            }

}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j,a,b,arr[1000000],sum=0,m;
    while(scanf("%d",&n)==1)
    {
        m=0;
     if(n==0)
     {
         break;
     }


    for(j=3;j<=n;j++)
    {
         for(i=2;i<j;i++)
         {
             if(j%i==0)
             {
                 break;
             }
         }

     if(i==j)
        {
        /// printf("%d is prime\n",n);
         arr[m]=j;
         m++;
        }

    }
   int max=0,sum=0,g=0,h=0,b=0,v=0,sub=0,ck = 0;
    for(i=0;i<m;i++)
    {
     ///  cout<<arr[i]<<" ";
                for(j=i+1;j<m;j++)
                {
                    sum=arr[i]+arr[j];
                    sub=arr[j]-arr[i];

                    g=arr[i];
                    h=arr[j];
                                 if(sum==n)
                                    {
                                        if(max<sub)
                                                {
                                                    max = sub;
                                                    b=g;
                                                    v=h;
                                                    cout<<n<<" = "<<b<<" + "<<v<<endl;
                                                    ck = 1;
                                                }
                                    }

                }


    }
    if(ck == 0)
    {
        cout<<"Goldbach's conjecture is wrong.\n";
    }


    }



    return 0;
}
*/
