#include<stdio.h>
struct DisSet
{
int parent[];
int rank[10];
int n;
}
dis;
void makeSet()
{
for(int i=0;i<dis.n;i++)
{
dis.parent[i]=i;
dis.rank[i]=0;
}
}
void displaySet()
{
printf("Parent Array");
for(int i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i]);
}
printf("Rank Array");
for(int i=0; i<dis.n; i++)
{
printf("%d",dis.rank[i]);
}
printf("\n");
}
int find(int x)
{
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
return dis.parent[x];
}
       {
int xset=find(x);
int yset=find(y);
if(xset==yset)
return;
if(dis.rank[xset]<dis.ranl[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;
}
}


int main()
{
int n,x,y;
printf("How many elements..");
scanf("%d",&dis.n);
makeSet();
int ch,wish;
do
{
printf("_____MRENU______");
print"1.Union\n2.Find\n3.Display\n");
printf("Enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case1:printf("Enter element to perform union");
scanf("%d%d",&x,&y);
Union(x,y);
break;
case2:printf("Enter elements to check if connected components");
scanf("%d%d",&x,&y);
if(find(x)==find(y))
printf("Connected Components\n");
else
printf("Not Connected Componenets\n");
break;
case3:dispalySet();
break;
}
printf("\nDo you Wish to Continue..(1/0)\n");
scanf("%d",&wish);
}
while(wish==1);
return 0;
}