#include<stdio.h>
int main()
{
	int a,sum=0;//28
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		while(i>0)//22
		{
		int rem;
		
		rem=i%10;
			if(rem==3)
			{
				sum++;
			}
			int j=i/10;
			printf("%d",j);
		}
	}
//printf("%d",sum);

return 0;

}
