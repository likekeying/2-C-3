//#include<stdio.h>
////枚举关键-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-枚举常量
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
#include<stdio.h>
#include<string.h>
//int main(viod)
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\ddd   ddd是八进制数字，\ddd表示八进制对应的十进制的ASCII码值对应的字符
//	return 0;
//}
#include<stdio.h>
int main(viod)
{	
	int input=0;
	printf("你能好好学习吗？（选择1/0）");
	scanf_s("%d", &input);
	if (input == 1)
	printf("拿到offer");
	else
	printf("回家种田");
	return 0;
}