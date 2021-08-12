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
#include<stdio.h>
int main(void)
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	printf("%d\n",strlen(arr1));//strlen-string length-计算字符串长度的
	printf("%d\n",strlen(arr2));
	return 0;
}