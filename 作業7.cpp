#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i=1,sum=0;
	do
	{
		printf("�q�X1+2+....+n���`�M:");
		scanf("%d",&n);
	}
	while (n<=0);
	do 
	sum+=i++;
	while (i <= n);
	printf("1+2+...+%d=%d\n",n,sum);
	system("pause");
	return 0;
	
}
