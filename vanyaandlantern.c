#include<stdio.h>
int a[1000];
int main() {
int n,l,i,j,temp,s,b;
double x=0;
scanf("%d %d", &n, &l);
for(i=0;i<n;++i) {
scanf("%d", &a[i]);
}
for(int i=0;i<n;++i)
{
for(int j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<=n-2;++i) 
{
if(a[i+1]-a[i]>x) 
x=a[i+1]-a[i];
}
x=x/2;
s=a[0]-0;
b=l-a[n-1];
if(s>x) x=s;
if(b>x) x=b;
printf("%.10f", x);
return 0;
}