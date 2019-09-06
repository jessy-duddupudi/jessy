#include<stdio.h>
int main()
{
int m,n,p,q,sum=0;
int i,j,k;
int a[2][2],b[2][2],multiply[2][2];
printf("enter order of mat a\n");
scanf("%d %d",&m,&n);
printf("enter order of nat b\n");
scanf("%d %d",&p,&q);
printf("enter elements of a\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
if(n=!p)
{
printf("multiplication cannot be done\n");
}

else
printf("enter elements of b\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
sum=sum+a[i][k]*b[k][j];
}
multiply[i][j]=sum;
sum=0;
}
}
printf("product of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",multiply[i][j]);
printf("\n");
}
}

return 0;
}


