#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;
int main()
{
    char s[800];
    int n,j,k,count=0,len;
    int m=0,a=0,r=0,g=0,i=0,t=0;
    while(scanf("%d",&n)==1)
    {
        for(k=1;k<=n;k++)
        {
            count= m = a = r = i = t = g = 0;
            scanf("%s", s);
            len = strlen(s);

            for(j=0; j<len; j++){
                if(s[j]=='M')
                    m++;
                else if(s[j]=='A')
                    a++;
                else if(s[j]=='R')
                    r++;
                else if(s[j]=='G')
                    g++;
                else if(s[j]=='I')
                    i++;
                else if(s[j]=='T')
                    t++;
            }
            while(m>=1 && a>=3 && r>=2 && i>=1 && t>=1 && g>=1){
                    count++;
                    m-=1;
                    a-=3;
                    r-=2;
                    i-=1;
                    t-=1;
                    g-=1;
            }
        printf("%d\n", count);
        }

    }


return 0;
}
