 #include<stdio.h>
#include<string.h>
int main()
{
	int n,i,b=0,d=0;
	char a[1000];
	printf("input\n");
            gets(a);
            n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		b++;
		if(a[i]>='A'&&a[i]<='Z')
	            b++;
		if(a[i]>='0'&&a[i]<='9')
		d++;
	}
              if((b!=0)&&(d!=0))
              {
	 printf(" yes");
              }
	 else
	 {
	 printf("no");
	 }
	return 0;
}
