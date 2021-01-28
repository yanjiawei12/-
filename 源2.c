#include<stdio.h>
#include<windows.h>   //Sleep(1000)让画面停留1000ms
#include<stdlib.h>//system("cls")执行系统命令的一个函数  cls清空屏幕
#include<string.h>//strlen计算字符串长度  strcpm（,""）;字符串比较 字符串不能直接用==比较 如果相同，则返回值为0
#include<time.h>
#include<math.h>  //sqrt()开平方
//猜数字游戏改进
void menu()
{ 
	printf("**************************\n");
	printf("****1.开始游戏  0退出*****\n");
	printf("**************************\n");

}
void game()
{
	int ret = 0;
	int g = 0;
	printf("猜数字\n");
	while (1)                      //1，判断为真，直接进入循环
	{
		scanf_s("%d", &g);
		ret = rand() % 10 + 1;  //32364   生成一个1到10的数字
		
		if (g < ret)
		{
			printf("猜小了\n");
		}
		else if (g > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //时间戳
	menu();
	do
	{
		printf("请选择（1/0）");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	}
	while (input != 0);
	

	


	return 0;
}






//输出一个乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <=i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);   //加一个-2使乘法口诀表左对齐，位数不够的用空格补齐 2是右对齐  02是右对齐，位数不够的用0补齐
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}






//求几个整数的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,4,5,67,45,687,324,2522,3436 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("%d\n", arr[0]);
//
//	return 0;
//}





//分数求和 1-1/2+1/3-1/4+·······-1/100
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.00;    注意sum的类型  sum定义为整形不能打印小数
//	for (i = 1;i <= 100;i++)   
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}






//计算1到100中有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)     //9 19 29 39 49 59 69 79 89 99  10
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)     //90 91 92 93 94 95 96 97 98 99  10
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("%d\n", count);  //有多少个9而不是带9的数字  99中有两个9 所以99重复+一次
//
//	return 0;
//}





//写一个代码，判断100到200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101;i <= 200;i += 2)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//
//	     }
//	}
//
//
//	return 0;
//}





//输出1000到2000年之间的闰年
//int main()
//{
//	int year = 1000;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//
//	}
//
//
//	return 0;
//}






//求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int y = 0;
//	scanf_s("%d%d", &a, &b);
//	while (a%b!= 0)
//	{
//		y = a % b;
//		a = b;
//		b = y;
//
//
//	}
//	printf("%d\n", b);
//
//
//	return 0;
//}









//打印100以内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//
//	return 0;
//}





//将三个数按由小到大的顺序排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf_s("%d%d%d", &a, &b, &c);  //9，8，7  8,9,7  7,9,8
//	if (a > b)
//	{
//		temp= a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//
//	return 0;
//}


//写一个函数，进行冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] =temp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (n = 0;n < sz;n++)
//	{
//		printf("%d\n", arr[n]);
//	}
//
//
//	return 0;
//}






//猜数字游戏
//void menu()
//{ 
//	printf("**************************\n");
//	printf("****1.开始游戏  2退出*****\n");
//	printf("**************************\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int g = 0;
//	printf("猜数字\n");
//	scanf_s("%d", &g);
//	ret = rand()%10+1;
//	printf("%d\n", ret);
//	if (g < ret)
//	{
//		printf("猜小了\n");
//	}
//	else if (g > ret)
//	{
//		printf("猜大了\n");
//	}
//	else
//	{
//		printf("恭喜你，猜对了\n");
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("请选择（1/0）");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//		
//	}
//	while (input != 0);
//	
//
//	
//
//
//	return 0;
//}

//冒泡排序法
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int temp = 0;
//	int arr[20] = { 0 };
//	for (n = 0;n < 3;n++)
//	{
//		scanf_s("%d", &arr[n]);
//	}
//	for (i = 0;i < 3-1;i++)
//	{
//
//		for (j = 0;j < 3 - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp=arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//
//		}
//	}
//	for (n = 0;n < 3;n++)
//	{
//		printf("%d ", arr[n]);
//	}
//
//
//	return 0;
//}



//模拟登录
//int main()
//{
//	char arr[] = { "asdfgh" };
//	char arr2[10] = { 0 };
//	int i = 0;
//	int z = 0;
//	printf("请输入密码\n");
//	for (i = 0;i < 3;i++)
//	{
//		z = 2 - i;
//		scanf_s("%s", arr2,10);
//		if (arr[0] == arr2[0])
//		{
//			printf("密码正确\n");
//			break;
//		}
//
//		else
//		{
//			printf("密码错误，请重新输入，你还有%d次机会\n", z);
//		}
//	}
//
//	return 0;
//}

//字符从两端移动向中间汇聚
//int main()
//{
//	char arr1[] = { "#####################" };
//	char arr2[] = { "welcome to bit!!!!!!!" };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int a = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//	int j = 20;
//	printf("%s\n", arr1);
//	for (i = 0, j = 20;i <= 10 ;i++, j--)
//	{
//		arr1[i] = arr2[i];
//		arr1[j] = arr2[j];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%d\n", sz);
//	printf("%d\n", a);
//
//	return 0;
//}



//折半搜索法  二分查找法 算法复杂度 log以2为底n的对数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 11;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为 %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}




//效率较低的一种搜索方法  遍历
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}






//简化版求1到10的阶乘的和
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}





//正确
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum1 = 0;
//	int sum2 = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		sum2 = 1;
//		for (j = i;j > 1;j--)
//		{
//			sum2 = sum2 * j;
//		}
//		sum1 = sum1 + sum2;
//	}
//	
//	printf("%d\n", sum1);
//	return 0;
//}

//错误
//int main()
//{
//	
//	int j = 0;
//	int sum1 = 1;
//	int sum2 = 1;
//	
//	
//
//
//		for (j=2;j<=10;j++)
//		{
//			for (j = j;j > 1;j--)
//			{
//				sum2 = sum2 * j;
//			}
//			sum1 = sum1 + sum2;
//		}
//		
//		printf("%d\n", sum1);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf_s("%d", &n);//此顺序不符合c语法规定
//	int a = n;
//	for (i = 0;i < n ;i++)
//	{
//		sum = sum * a;
//		a--;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//正确
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	scanf_s("%d", &n);
//	for (n = n;n > 1;n--)
//	{
//		sum = sum * n;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//错误
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	
//	int a = 0;
//	scanf_s("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		a = n;
//		sum= sum*a;
//		a--;
//		
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	if (i = 0)//直接赋值为0，0为假，直接走else
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("666\n");
//	}
//	return 0;
//}