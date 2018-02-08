#include<stdio.h>
int main()
{
	int array[50],n,i,j,t;
 	printf("Enter number of elements\n");
	scanf("%d",&n);
  	printf("Enter %d integers\n", n);
 	for(i=0;i<n;i++)
    	scanf("%d",&array[i]);
   	for (i=0;i<n;i++)
   	{
    	  for (j=0;j<n;j++)
    		{
      		if(array[j] < array[j+1])
      		{
        		t=array[j];
        		array[j]   = array[i];
        		array[i] = t;
      		}
    		}
  	}
	 printf("the largest number is %d",array[0]);
   	return 0;
}
