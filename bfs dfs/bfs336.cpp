#include<bits/stdc++.h>
using namespace std;
vector<long long>G[100000];
long long cnt,p=1;
int arr[100];

int bfs(long long cnt,long long source,long long ttl)
{
int arr[1000],len = 1,max=0;
long long num=0,i,k,m=1;
long visited[100000]={0};
long long distance[100000]={0};
queue<long long>Q;
Q.push(source);
visited[source]=1;
distance[source]=0;

arr[0]=source;
while(!Q.empty())
{
    long long u=Q.front();
    Q.pop();

    for(i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(!visited[v])
        {
            arr[len]=v;
            len++;

           Q.push(v);
           visited[v]=1;
           distance[v]=distance[u]+1;
           if(distance[v]>max)
           {
               max=distance[v];
           }

        }
    }
}
cout<<"\nbfs : "<<endl;
for(int h=0;h<len;h++)
{
    cout<<" "<<arr[h];
}
cout<<endl;

int arrvisited[100];
int valvisited=0;

cout<<"\nvisited nodes using k: "<<endl;
for(k=0;k<99990;k++)
{
   if(distance[k]<=ttl && distance[k]>0)
   {
   arrvisited[valvisited] = k;
   valvisited++;
   m++;
   cout<<" "<<k;
   }
}

cout<<"\nvisited nodes using arrvisited array: "<<endl;
for(int a=0;a<valvisited;a++)
{
   cout<<" "<<arrvisited[a];
}

cout<<"\n\n\nnot visited nodes using k: "<<endl;
int arrnotvisited[100];
int valnotvisited=0;
for(k=0;k<99990;k++)
{
   if(distance[k]>ttl && distance[k]<=max)
   {
   arrnotvisited[valnotvisited] = k;
   valnotvisited++;
   cout<<" "<<k;
   }
}
cout<<endl;

cout<<"\nnot visited nodes using arrvisited array: "<<endl;
for(int a=0;a<valnotvisited;a++)
{
   cout<<" "<<arrnotvisited[a];
}


if(G[source].size()==0)
{
    m=0;
}

printf("\n\n\nvisited : %lld \n\n",m);

 cout<<"Case "<<p++<<": "<<(cnt-m)<<" nodes not reachable from node "<<source<<" with TTL = "<<ttl<<"."<<endl;



}





int main()
{
    long long i,edge,x,y,source ,cnt, ttl;

    cout<<"enter edge : \n";
   while(cin>>edge)
   {


    if(edge==0)
    {
        return 0;
    }

    long long total[100000]={0};
    cnt=0;


    memset(G,NULL,sizeof(G));
    for(i=0;i<edge;i++)
    {
       cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        total[x]=1;
        total[y]=1;

    }

    long long d;
    for(d=0;d<99990;d++)
    {
        if(total[d]==1)
        {
            cnt++;
        }
    }
    printf("\nTotal node : %d \n",cnt);

   cout<<"\nenter source and ttl : \n";
    while(cin>>source>>ttl)
    {
        if(source==0 && ttl==0)
        {
            break;
        }
       bfs(cnt,source,ttl);
    }

   }



    return 0;
}

