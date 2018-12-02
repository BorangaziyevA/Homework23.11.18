#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task1()
{
	//  a)Задачи на линейный алгоритм
	//	1.Составить алгоритм вычисления значения функции y = 7x + 5 при любом значении x.

	int x = -100 + rand() % 100;
	int y = 7 * x + 5;

	printf("x = ");
	printf("%d\n", x);

	printf("y = ");
	printf("%d\n", y);

}
void task2()
{
	//  a)Задачи на линейный алгоритм
	//	2.Составить алгоритм вычисления периметра квадрата, если известна его сторона.
	int x = -100 + rand() % 100;
	int y = 4 * x;
	printf("Сторона квадрата = ");
	printf("%d\n", x);

	printf("Периметр квадрата = ");
	printf("%d\n", y);
}
void task3()
{
	//		b)Задачи на разветвляющийся алгоритм
	//  2.Составить алгоритм решения задачи : впишется ли круг в квадрат, если известны сторона квадрата и радиус круга.
	int x = 1 + rand() % 10;
	int y = 1 + rand() % 10;
	int p = 4 * x;
	int pi = 3;
	int k = 2 * pi * y;

	printf("Сторона квадрата = ");
	printf("%d\n", x);

	printf("Радиус круга = ");
	printf("%d\n", y);

	printf("Периметр квадрата = ");
	printf("%d\n", p);

	printf("Периметр круга = ");
	printf("%d\n", k);

	if (p > k) {
		printf("Впишется\n");
	}
	else
		printf("Не впишется\n");
}
void task4()
{
	//b)Задачи на разветвляющийся алгоритм
	//Составить алгоритм решения задачи для определения меньшего из двух вещественных чисел.
	int x = -10 + rand() % 10;
	int y = -10 + rand() % 10;
	printf("x = ");
	printf("%d\n", x);

	printf("y = ");
	printf("%d\n", y);

	if (x > y) {
		printf("%d", x);
		printf(" больше\n");
	}
	else
	{
		printf("%d", y);
		printf(" больше\n");
	}
}
void task5()
{
	//c) Дополнительные задачи
	//Составить алгоритм нахождения числа десятков и единиц в двухзначном числе.
	int x = 10 + rand() % 99;
	int y = x / 10;
	int z = x % 10;
	printf("Двухзначное число:");
	printf("%d\n", x);


	printf("Десятков = ");
	printf("%d\n", y);

	printf("Единиц = ");
	printf("%d\n", z);
}
void task6()
{	//c) Дополнительные задачи
	//Составить алгоритм для нахождения произведения двух наименьших чисел из трех заданных.
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
	printf("Введите номер задания:");
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
	printf("Хотите продолжить?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}