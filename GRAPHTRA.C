#include<stdio.h>
#include<conio.h>
struct node
{
int vertex;
struct node *next;
};
int v,e;
struct node **adj,**adj1;
int *que,*visited,*ft;
int f=-1,r=-1,t=0;
void dfs();
void dfsvisit(int);
void dfsvisit1(int);
void adjlistrep(struct node **adj,int s,int en)
{
struct node *ne=(struct node*)malloc(sizeof(struct node));
ne->vertex=en;
ne->next=adj[s];
adj[s]=ne;
}
void main()
{
int s,i,en;
struct node *ptr;
printf("enter no:of vertices");
scanf("%d",&v);
adj=(struct node **)malloc((v+1)*sizeof(struct node *));
adj1=(struct node **)malloc((v+1)*sizeof(struct node *));
for(i=0;i<=v;i++)
adj[i]=adj1[i]=NULL;
printf("enter the no:of edges");
scanf("%d",&e);
printf("enter the edges\n");
printf("start End\n");
for(i=0;i<e;i++)
{
scanf("%d%d",&s,&en);
adjlistRep(adj,s,en);



