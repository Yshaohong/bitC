#include<stdio.h>
#include<windows.h>
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
void multip(int n)
{
	int i=1;
	for(;i<=n;i++)
	{
		int sum=0;
		int j=1;
		for(;j<=n;j++)
		{
			sum=i*j;
			printf(" %d * %d = %d ",i,j,sum);
		}
		printf("\n");
	}
}
//使用函数实现两个数的交换。
void exchange(int n,int m)
{
	int a=n;
	int b=m;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d,%d\n",a,b);
}
//实现一个函数判断year是不是润年。
void leap(int n)
{
	int i=0;
	if(n%4==0&&n%100!=0||n%400==0)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
}
//实现一个函数，判断一个数是不是素数。
void Pnumber(int n)
{
	int i=2;
	for(;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("不是素数!\n");
			break;
		}
		else
		{
			printf("是素数!\n");
			break;
		}
	}
}
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

/*void lnit(int arr[],int sz)
{
	int i=0;
	for(;i<sz;i++)
	{
		arr[i]=0;
		printf(" %d",arr[i]);
	}
	printf("\n");
}*/

/*void print(int *arr,int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}*/

void Reverse(int arr[],int sz)
{
	int i=0;
	for(;i<sz;i++)
	{
	    int left=0;
	    int right=sz-1;
	    while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;	
	}
	printf(" %d",arr[i]);
	}
	
}



int main()
{
	int arr[5]={1,2,3,4,5};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//print(arr,sz);
    //lnit(arr,sz);
	Reverse(arr,sz);


	//Pnumber(14);
	//leap(2004);
	//exchange(2,5);
	//multip(12);
	return 0;
}