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
//#include<stdio.h>
//int main(void)
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n",strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int main(viod)
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c", '\32');
//	//\ddd   ddd�ǰ˽������֣�\ddd��ʾ�˽��ƶ�Ӧ��ʮ���Ƶ�ASCII��ֵ��Ӧ���ַ�
//	return 0;
//}
#include<stdio.h>
int main(viod)
{	
	int input=0;
	printf("���ܺú�ѧϰ�𣿣�ѡ��1/0��");
	scanf_s("%d", &input);
	if (input == 1)
	printf("�õ�offer");
	else
	printf("�ؼ�����");
	return 0;
}