#include <stdio.h>
int main(void) {
	int r,n,t ;
	printf("input");
	scanf("%d%d",&r,&n);
	printf("before swapping %d %d",r,n);
             t=n;
             n=r;
             r=t;
	 printf(" after swapping %d %d ",r,n);
	return 0;
}
