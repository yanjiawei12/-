#include<stdio.h>
#include<windows.h>   //Sleep(1000)�û���ͣ��1000ms
#include<stdlib.h>//system("cls")ִ��ϵͳ�����һ������  cls�����Ļ
#include<string.h>//strlen�����ַ�������  strcpm��,""��;�ַ����Ƚ� �ַ�������ֱ����==�Ƚ� �����ͬ���򷵻�ֵΪ0
#include<time.h>
#include<math.h>  //sqrt()��ƽ��
//��������Ϸ�Ľ�
void menu()
{ 
	printf("**************************\n");
	printf("****1.��ʼ��Ϸ  0�˳�*****\n");
	printf("**************************\n");

}
void game()
{
	int ret = 0;
	int g = 0;
	printf("������\n");
	while (1)                      //1���ж�Ϊ�棬ֱ�ӽ���ѭ��
	{
		scanf_s("%d", &g);
		ret = rand() % 10 + 1;  //32364   ����һ��1��10������
		
		if (g < ret)
		{
			printf("��С��\n");
		}
		else if (g > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //ʱ���
	menu();
	do
	{
		printf("��ѡ��1/0��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	}
	while (input != 0);
	

	


	return 0;
}






//���һ���˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <=i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);   //��һ��-2ʹ�˷��ھ�������룬λ���������ÿո��� 2���Ҷ���  02���Ҷ��룬λ����������0����
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}






//�󼸸����������ֵ
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





//������� 1-1/2+1/3-1/4+��������������-1/100
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.00;    ע��sum������  sum����Ϊ���β��ܴ�ӡС��
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






//����1��100���ж��ٸ�9
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
//	printf("%d\n", count);  //�ж��ٸ�9�����Ǵ�9������  99��������9 ����99�ظ�+һ��
//
//	return 0;
//}





//дһ�����룬�ж�100��200֮�������
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





//���1000��2000��֮�������
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






//�������������Լ��
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









//��ӡ100����3�ı���
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





//������������С�����˳������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf_s("%d%d%d", &a, &b, &c);  //9��8��7  8,9,7  7,9,8
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


//дһ������������ð������
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






//��������Ϸ
//void menu()
//{ 
//	printf("**************************\n");
//	printf("****1.��ʼ��Ϸ  2�˳�*****\n");
//	printf("**************************\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int g = 0;
//	printf("������\n");
//	scanf_s("%d", &g);
//	ret = rand()%10+1;
//	printf("%d\n", ret);
//	if (g < ret)
//	{
//		printf("��С��\n");
//	}
//	else if (g > ret)
//	{
//		printf("�´���\n");
//	}
//	else
//	{
//		printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��1/0��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
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

//ð������
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



//ģ���¼
//int main()
//{
//	char arr[] = { "asdfgh" };
//	char arr2[10] = { 0 };
//	int i = 0;
//	int z = 0;
//	printf("����������\n");
//	for (i = 0;i < 3;i++)
//	{
//		z = 2 - i;
//		scanf_s("%s", arr2,10);
//		if (arr[0] == arr2[0])
//		{
//			printf("������ȷ\n");
//			break;
//		}
//
//		else
//		{
//			printf("����������������룬�㻹��%d�λ���\n", z);
//		}
//	}
//
//	return 0;
//}

//�ַ��������ƶ����м���
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



//�۰�������  ���ֲ��ҷ� �㷨���Ӷ� log��2Ϊ��n�Ķ���
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
//			printf("�ҵ��ˣ��±�Ϊ %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;
//}




//Ч�ʽϵ͵�һ����������  ����
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
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}






//�򻯰���1��10�Ľ׳˵ĺ�
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





//��ȷ
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

//����
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
//	scanf_s("%d", &n);//��˳�򲻷���c�﷨�涨
//	int a = n;
//	for (i = 0;i < n ;i++)
//	{
//		sum = sum * a;
//		a--;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//��ȷ
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


//����
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
//	if (i = 0)//ֱ�Ӹ�ֵΪ0��0Ϊ�٣�ֱ����else
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("666\n");
//	}
//	return 0;
//}