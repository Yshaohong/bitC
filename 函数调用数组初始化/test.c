#include<stdio.h>
#include<windows.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���
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
//ʹ�ú���ʵ���������Ľ�����
void exchange(int n,int m)
{
	int a=n;
	int b=m;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d,%d\n",a,b);
}
//ʵ��һ�������ж�year�ǲ������ꡣ
void leap(int n)
{
	int i=0;
	if(n%4==0&&n%100!=0||n%400==0)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
}
//ʵ��һ���������ж�һ�����ǲ���������
void Pnumber(int n)
{
	int i=2;
	for(;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("��������!\n");
			break;
		}
		else
		{
			printf("������!\n");
			break;
		}
	}
}
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

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