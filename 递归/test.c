#include<stdio.h>
#include<math.h>
//递归和非递归分别实现求第n个斐波那契数。
/*int Fei(int n)//递归
{

	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return Fei(n-2)+Fei(n-1);
	}
}*/

//编写一个函数实现n^k，使用递归实现
/*int Pow(int n,int k)
{
	if(k==0)
	{
		return 1;
	}
	if(k==1)
	{
		return n;
	}
	else
	{
		return n*Pow(n,k-1);
	}
}*/

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
/*int DigitSum(int n)
{
	int i=0;
	if(n<10)
	{
		return n;
	}
	else
		return n%10+DigitSum(n/10);//1+7+2+9,模10取余，除10向左移动一位
}*/
//求n的阶乘
/*int C(int n)
{
	int i;
	int sum=1;
	for(i=1;i<=n;i++)
		{
			sum=sum*i;
			printf("%d\n",sum);
	     }
	return sum;
}*/
//递归方式实现打印一个整数的每一位
int Zhen(int n)
{
	if(n>9)
	{
		Zhen(n/10);
	}
	printf("%d ",n%10);

}


int main()
{
	Zhen(123);
	//C(4);
	//printf("%d\n",DigitSum(1729));
	//printf("%d \n",Pow(2,3));
	/*int n,i;
	scanf("%d",&n);
	printf("斐波那契数列为:",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",Fei(i));
	}
	printf("\n");*/
}