/*����һ��ѧ���ṹ����ȡ����STU������ѧ�š���������ѧ�����ġ��������Ӣ��ȿγ̳ɼ���
�����ֺܷ�ƽ���֣�дһ������ʵ����һ��ѧ��ÿ��ѧ�����ſγ̵�ƽ��ֵ������ԭ��Ϊ
float ave(STU stu[],int size),����֮*/
#include <stdio.h>
#include <string.h>
#define SIZE 2
 typedef struct student
{
	int num;
	char name[20];
	float math, Chinese, computer, English, total, ave;
}STU;
STU stu[SIZE];
float ave(STU stu[], int size);
int main()
{
	int i;
	printf("������ѧ����Ϣ:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("ѧ��:");
		scanf_s("%d", &stu[i].num);
		printf("����:");
		scanf_s("%s", stu[i].name,20);
		printf("��ѧ:");
		scanf_s("%f", &stu[i].math);
		printf("����:");
		scanf_s("%f", &stu[i].Chinese);
		printf("Ӣ��:");
		scanf_s("%f", &stu[i].English);
		printf("�����:");
		scanf_s("%f", &stu[i].computer);
	}
	ave(stu, SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("ѧ��:%d\n", stu[i].num);
		printf("����:%s\n", stu[i].name);
		printf("ƽ����:%g\n", stu[i].ave);
	}
	return 0;
}
float ave(STU stu[], int size)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		stu[i].total = stu[i].math + stu[i].Chinese + stu[i].computer + stu[i].English;
		stu[i].ave = stu[i].total / 4;
	}
	return stu[i].ave;
}
