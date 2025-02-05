#include<stdio.h>
void main()
{
int nb,nf,b[10],f[10];
printf("Enter number of memmory blocks\n");
scanf("%d",&nb);
printf("enter size of each blocks\n");
for(int i=0;i<nb;++i)
scanf("%d",&b[i]);
printf("enter number of processes\n");
scanf("%d",&nf);
printf("enter size of each processes\n");
for(int i=0;i<nf;++i)
scanf("%d",&f[i]);
int flag[nf],allocation[nf];
for(int i=0;i<nf;++i){
    flag[i]=0;
    allocation[i]=-1;
}
int max;
for(int i=0;i<nf;++i)
for(int j=0;j<nb;++j){
if(flag[i]==0 && b[j]>=f[i])
{
max=b[j];
allocation[i]=j;
for(int k=j+1;k<nb;++k)
{
if(b[k]>=f[i] && b[k]>max)
{
max=b[k];
allocation[i]=k;
j=k;
}
}
flag[i]=1;
b[j]-=f[i];
break;
}
}
printf("Process no Process size Block no\n");
for(int i=0;i<nf;++i)
{
printf("%d\t\t%d\t\t",i+1,f[i]);
if(flag[i]==1)
printf("%d\n",allocation[i]+1);
else
printf("not allocated\n");
}}