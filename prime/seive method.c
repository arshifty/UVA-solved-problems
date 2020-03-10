#include<stdio.h>
int main()
{

    int m[500],i,j,n;
    ///all elements of m is -1
    memset(m,-1,sizeof(m));
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(m[i]==-1)
        {
            for(j=2;i*j<=n;j++)
            {
                m[i*j]=0;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(m[i]!=0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
