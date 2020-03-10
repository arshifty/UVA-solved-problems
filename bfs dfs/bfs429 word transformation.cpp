#include<cstdio>
#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
int main()
{
    //freopen("c:\\temp\\in.txt","r",stdin);
 int test_case;
 scanf("%d",&test_case);
  cin.ignore();
  while(test_case--)
  {
    map<string,int>my;
    map<int,string>you;
    string word;
    vector<int>graph[210];
    int i=1;
    while(cin>>word)
    {
       if(word=="*")
        break;
       my[word]=i++;
       you[i-1]=word;
    }
    for(int j=1;j<i-1;j++)
    {
        string a=you[j];
        int len_1=a.size();
      for(int k=j+1;k<i;k++)
      {
         string b=you[k];
         int len_2=b.size();
         if(len_1==len_2)
         {
             int differ=0;
           for(int m=0;m<len_1&& differ<=1;m++)
           {
              if(a[m]!=b[m])
                differ++;
           }
           if(differ==1)
           {
               graph[j].push_back(k);
               graph[k].push_back(j);
           }
         }
      }
    }
    cin.ignore();
    string input;
    int sou,des;
     while(getline(cin,input))
     {
         string source,destination;
         if(input.size()==0)
            break;
         int i;
         for( i=0;input[i]!=' ';i++)
         {
             source=source+input[i];
         }
         i++;
          int j=input.size();
          for(;i<j;i++)
         {
             destination=destination+input[i];
         }
      sou=my[source];
      des=my[destination];
      int visit[210];
      memset(visit,0,sizeof visit);
      queue<int>q;
      q.push(sou);
      visit[sou]=1;
      while(!q.empty())
      {
         int pop=q.front();
         q.pop();
         if(pop==des)
         {
             cout<<input<<" "<<visit[pop]-1<<endl;
             break;
         }
         for(int j=0;j<graph[pop].size();j++)
         {
             int v=graph[pop][j];
              if(visit[v]==0)
              {
                 visit[v]=1+visit[pop];
                 q.push(v);
              }
         }
      }
     }
        if(test_case!=0)
            cout<<endl;
  }
  return 0;
}




