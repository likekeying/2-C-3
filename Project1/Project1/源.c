//#include<stdio.h>
////ö�ٹؼ�-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-ö�ٳ���
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
	printf("%d\n",strlen(arr1));//strlen-string length-�����ַ������ȵ�
	printf("%d\n",strlen(arr2));
	return 0;
}