#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task1()
{
	//  a)������ �� �������� ��������
	//	1.��������� �������� ���������� �������� ������� y = 7x + 5 ��� ����� �������� x.

	int x = -100 + rand() % 100;
	int y = 7 * x + 5;

	printf("x = ");
	printf("%d\n", x);

	printf("y = ");
	printf("%d\n", y);

}
void task2()
{
	//  a)������ �� �������� ��������
	//	2.��������� �������� ���������� ��������� ��������, ���� �������� ��� �������.
	int x = -100 + rand() % 100;
	int y = 4 * x;
	printf("������� �������� = ");
	printf("%d\n", x);

	printf("�������� �������� = ");
	printf("%d\n", y);
}
void task3()
{
	//		b)������ �� ��������������� ��������
	//  2.��������� �������� ������� ������ : �������� �� ���� � �������, ���� �������� ������� �������� � ������ �����.
	int x = 1 + rand() % 10;
	int y = 1 + rand() % 10;
	int p = 4 * x;
	int pi = 3;
	int k = 2 * pi * y;

	printf("������� �������� = ");
	printf("%d\n", x);

	printf("������ ����� = ");
	printf("%d\n", y);

	printf("�������� �������� = ");
	printf("%d\n", p);

	printf("�������� ����� = ");
	printf("%d\n", k);

	if (p > k) {
		printf("��������\n");
	}
	else
		printf("�� ��������\n");
}
void task4()
{
	//b)������ �� ��������������� ��������
	//��������� �������� ������� ������ ��� ����������� �������� �� ���� ������������ �����.
	int x = -10 + rand() % 10;
	int y = -10 + rand() % 10;
	printf("x = ");
	printf("%d\n", x);

	printf("y = ");
	printf("%d\n", y);

	if (x > y) {
		printf("%d", x);
		printf(" ������\n");
	}
	else
	{
		printf("%d", y);
		printf(" ������\n");
	}
}
void task5()
{
	//c) �������������� ������
	//��������� �������� ���������� ����� �������� � ������ � ����������� �����.
	int x = 10 + rand() % 99;
	int y = x / 10;
	int z = x % 10;
	printf("����������� �����:");
	printf("%d\n", x);


	printf("�������� = ");
	printf("%d\n", y);

	printf("������ = ");
	printf("%d\n", z);
}
void task6()
{	//c) �������������� ������
	//��������� �������� ��� ���������� ������������ ���� ���������� ����� �� ���� ��������.
	int x = 0 + rand() % 9;
	int y = 0 + rand() % 9;
	int z = 0 + rand() % 9;
	printf("x = ");
	printf("%d\n", x);

	printf("y = ");
	printf("%d\n", y);

	printf("z = ");
	printf("%d\n", z);

	if ((x > y) && (x > z))
	{
		printf("%d", y);
		printf(" %d\n", z);
	}
	else if ((y > x)&&(y > z))
	{
		printf("%d", x);
		printf(" %d\n", z);
	}
	else if ((z > x) && (z > y))
	{
		printf("%d", x);
		printf(" %d\n", y);
	}

}
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	
	int task;
	char flag;

start:
	printf("������� ����� �������:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:task1(); break;
	case 2:task2(); break;
	case 3:task3(); break;
	case 4:task4(); break;
	case 5:task5(); break;
	case 6:task6(); break;
	default:
		break;
	}
	printf("������ ����������?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}