//#include<stdio.h>
//枚举关键-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//MALE,FEMALE,SECRET-枚举常量
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
//	printf("%d\n",strlen(arr1));//strlen-string length-计算字符串长度的
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main(viod)
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\ddd   ddd是八进制数字，\ddd表示八进制对应的十进制的ASCII码值对应的字符
//	return 0;
//}
//#include<stdio.h>
//int main(viod)
//{	
//	int input=0;
//	printf("你能好好学习吗？（选择1/0）");
//	scanf_s("%d", &input);
//	if (input == 1)
//	printf("拿到offer");
//	else
//	printf("回家种田");
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	printf("好好学习\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("敲一行代码%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("拿到好offer\n");
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
	//移位操作符（二进制）
	//<<左移
	//>>右移
	int a = 1;
	//整型1占4个字节-32个bit位
	//00000000000000000000000000000001
	int b = a << 2;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}