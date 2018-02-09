#include <stdio.h>
int main() 
{
	int n,r,count=0,i=0,a[100];
printf("input");
scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	n=n/10;
	a[i]=r;
	count++;
	i++;
}
for(i=count;i>0;i--)
printf("%d\t",a[i-1]);

	return 0;
}
