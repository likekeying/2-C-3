//#include<stdio.h>
//ö�ٹؼ�-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//MALE,FEMALE,SECRET-ö�ٳ���
//int main(void)
//{	
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}
//
//#include<stdio.h>
//int main(void)
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n",strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main(viod)
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\ddd   ddd�ǰ˽������֣�\ddd��ʾ�˽��ƶ�Ӧ��ʮ���Ƶ�ASCII��ֵ��Ӧ���ַ�
//	return 0;
//}
//#include<stdio.h>
//int main(viod)
//{	
//	int input=0;
//	printf("���ܺú�ѧϰ�𣿣�ѡ��1/0��");
//	scanf_s("%d", &input);
//	if (input == 1)
//	printf("�õ�offer");
//	else
//	printf("�ؼ�����");
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	printf("�ú�ѧϰ\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("��һ�д���%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("�õ���offer\n");
//	return 0;
//}
//#include<stdio.h>
//ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main(void)
//{
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	int num1 = 100;
//	int num2 = 200;
//	sum=ADD(a, b);
//	printf("%d\n",sum);
//	sum=ADD(num1, num2);
//	printf("%d\n",sum);
//	sum = ADD(2, 3);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
int main(void)
{
	//��λ�������������ƣ�
	//<<����
	//>>����
	int a = 1;
	//����1ռ4���ֽ�-32��bitλ
	//00000000000000000000000000000001
	int b = a << 2;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}