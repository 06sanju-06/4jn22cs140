#include<stdio.h>
#include<stdlib.h>
int n,a[10][10],i,j,src,s[10],reach[10],ch,count=0;
void bfs(int n,int a[10][10],int src,int s[]) //BFS Algorithm
{
int q[10],u;
int f=1,r=1;
s[src]=1;
q[r]=src;
while(f<=r)
{
u=q[f];
f=f+1;
for(i=1;i<=n;i++)
if(a[u][i]==1 &&s[i]==0)
{ r=r+1;
q[r]=i;
s[i]=1;
}
}
}
void dfs(int v) //DFS Algorithm
{
int i;
reach[v]=1;
for(i=1;i<=n;i++)
{
if(a[v][i] && !reach[i])
{
printf("\n %d->%d",v,i);
count++;
dfs(i);
}
}
}
int main()
{
printf("Enter the number of nodes : ");
scanf("%d",&n);
printf("\n Enter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("\n the adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%3d",a[i][j]);
        printf("\n");
        }
for(;;)
{
printf("\nEnter your choice\n");
printf("1.BFS\n 2.DFS\n 3.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n Enter the source :");
scanf("%d",&src);
for(i=1;i<=n;i++)
s[i]=0;
bfs(n,a,src,s);
for(i=1;i<=n;i++)
{
if(s[i]==0)
printf("\n The node %d is not reachable",i);
else
printf("\n The node %d is reachable",i);
 }
break;
case 2: dfs(1);
if(count==n-1)
printf("\nThe graph is connected.");
else
printf("\nThe graph is not connected.");
 break;
case 3: exit(0);
}
}
}
