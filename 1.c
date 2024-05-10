#include<stdio.h>	
#include<string.h>	
int main(){
int a[100],b[100];
int i,j,s=1,n;
memset(b,0,100*sizeof(int));
scanf("%d",&n); 
for(i=0; i<n; i++)
scanf("%d",&a[i]); 
for(i=0; i<n; i++)
for(j=i+1; j<n; j++)	
if(a[i]==a[j])	
b[j]=b[i];	
for(i=0; i<n; i++)	
{
	s=1;	
for(j=0; j<n; j++)
if(b[j]==0 &&a[i]<a[j])
s++;	
printf("%d ",s);	
}
printf("\n");	
return 0;
}
