#include<stdio.h>
main()
{
int q[20],p[50],c=0,c1,d,f,i,j,k=0,n,r,t,b[20],c2[20];
printf("Enter the number of pages:");
scanf("%d",&n);
printf("Enter 12 Page Numbers:");
for(i=0;i<n;i++)
    scanf("%d",&p[i]);
q[k]=p[k];
printf("\t%d      --> F",q[k]);
printf("\n");

c++;
k++;
for(i=1;i<n;i++)
{
c1=0;
for(j=0;j<3;j++)
{
if(p[i]!=q[j])
c1++;
}
if(c1==3)
{
c++;
if(k<3)
{
q[k]=p[i];
k++;
for(j=0;j<k;j++)
printf("\t%d ",q[j]);
printf("        --> F");
printf("\n");
}
else
{
for(r=0;r<3;r++)
{
c2[r]=0;
for(j=i-1;j<n;j--)
{
if(q[r]!=p[j])
c2[r]++;
else
break;
}
}
for(r=0;r<3;r++)
b[r]=c2[r];
for(r=0;r<3;r++)
{
for(j=r;j<3;j++)
{
if(b[r]<b[j])
{
t=b[r];
b[r]=b[j];
b[j]=t;
}
}
}
for(r=0;r<3;r++)
{
if(c2[r]==b[0])
q[r]=p[i];
printf("\t%d",q[r]);
}
printf("        --> F");
printf("\n");
}
}
}
printf("\nThe no of page faults is %d",c);
}
