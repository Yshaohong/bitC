#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//100-200֮������
/*bool primrnumber(int n)
{
	int i=2;
	for(;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	for(n=100;n<200;n++)
	{
		if(primrnumber(n))
		{
		printf("%d  ",n);
		}
	}
	return 0;
}*/

//�˷��ھ���
/*int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
	return 0;
}*/

//�ж�1000-2000֮�������
int main()
{
	int i=1000;
	for(;i<=2000;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}