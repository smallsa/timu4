/*定义一个学生结构，并取别名STU，包含学号、姓名、数学、语文、计算机、英语等课程成绩，
还有总分和平均分，写一个函数实现求一组学生每个学生各门课程的平均值，函数原型为
float ave(STU stu[],int size),测试之*/
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
	printf("请输入学生信息:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("学号:");
		scanf_s("%d", &stu[i].num);
		printf("姓名:");
		scanf_s("%s", stu[i].name,20);
		printf("数学:");
		scanf_s("%f", &stu[i].math);
		printf("语文:");
		scanf_s("%f", &stu[i].Chinese);
		printf("英语:");
		scanf_s("%f", &stu[i].English);
		printf("计算机:");
		scanf_s("%f", &stu[i].computer);
	}
	ave(stu, SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("学号:%d\n", stu[i].num);
		printf("姓名:%s\n", stu[i].name);
		printf("平均分:%g\n", stu[i].ave);
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
