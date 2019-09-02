#include<stdio.h>
int main()
{
int s,n,x[1000],y[1000],i,j,k=0,l=0,temp;
scanf("%d%d",&s,&n);
for(i=0;i<n;i++)
scanf("%d%d",&x[i],&y[i]);
for(i=0;i<n-1;i++){
for(j=i;j<n;j++)
if(x[i]>x[j]){
temp=x[i];
x[i]=x[j];
x[j]=temp;
temp=y[i];
y[i]=y[j];
y[j]=temp;
}
}
for(i=0;i<n;i++)
if(s>x[i])
s=s+y[i];
else
break;
if(i==n)
printf("YES");
else
printf("NO");
}