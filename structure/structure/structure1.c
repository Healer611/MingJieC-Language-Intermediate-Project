#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct
//{
//	int a;
//	char c;
//	float f;
//}x;
//
//struct 
//{
//	int a;
//	char c;
//	float f;
//}* p;
//
//int main()
//{
//	//p = &x;//err
//
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//};


//typedef struct
//{
//	int data;
//	Node* next;
//} Node;


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n = {0};
//
//	return 0;
//}
//
//
//struct SN
//{
//	char c;
//	int i;
//}sn1 = { 'q', 100 }, sn2 = {.i=200, .c='w'};//ȫ�ֱ���
//
//struct S
//{
//	double d;
//	struct SN sn;
//	int arr[10];
//};
//
//int main()
//{
//	//struct SN sn3, sn4;//�ֲ�����
//	//printf("%c %d\n", sn2.c, sn2.i);
//	struct S s = { 3.14, {'a', 99}, {1,2,3} };
//	printf("%lf %c %d\n", s.d, s.sn.c, s.sn.i);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	return 0;
//}
//
#include <stddef.h>

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//
//	//printf("%d\n", sizeof(struct S1));//?
//	//printf("%d\n", sizeof(struct S2));//?
//	printf("%d\n", offsetof(struct S1, c1));//���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}
//


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}
//

//#pragma pack(1)
//
//struct S
//{
//	char c1;//1 1 1
//	int a; // 4 1 1
//	char c2;//1 1 1
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//


//struct S
//{
//	int data[100];
//	int num;
//};
//
//void print1(struct S tmp)
//{
//	printf("%d\n", tmp.num);
//}
//
//void print2(const struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

//00
//01
//10
//11
//
//struct A
//{
//	int _a : 2;//������λ
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
//


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}