#include <stdio.h>

int main(void) {
	int p=0,n ;
	printf("input");
	scanf("%d",&n);
	while(n!=0)
	{
		p=p+(n%10);
		n=n/10;
	}
	 printf(" output=%d",p);
	return 0;
}
