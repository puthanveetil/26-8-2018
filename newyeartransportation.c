#include<stdio.h>
int main()
{
int n,t,i;
scanf("%d %d",&n,&t);
int x=1,arr[n];
for(i=0;i<n-1;i++)
scanf("%d",&arr[i]);
while(x<t)
{
x=x+arr[x-1];
}
if(x==t)
printf("YES");
else
printf("NO");
return 0;
}