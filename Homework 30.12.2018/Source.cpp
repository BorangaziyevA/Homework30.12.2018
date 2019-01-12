#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<time.h>

void task5()
{
	printf("Извините, какие то странные задачи\n");
}

void task4()
{

}

void task3()
{
	printf("\nНе сделал, потому что не понял\n");
}

void task2()
{
	//2.	Вычислить сумму чисел от 1 до N, возведенных в степень M.
	//	Возведение в степень оформить как многократное умножение

	int N, N2, M;

	printf("Введите число:");
	scanf_s("%d", &N);

	printf("Степень - ");
	scanf_s("%d", &M);

	for (size_t i = 1; i <= N; i++)
	{
		N2 = pow(i, M);
		printf("%d\n", N2);
	}
}

void task1()
{
	//1.	Написать программу поиска чисел, лежащих в интервале от - 5 до 5,
	//	в последовательности чисел, вводимых с клавиатуры,
	//	предшествующих первому введенному нулю.Контрольный пример
	//	: 1, 10, -4, 5, -16, -5, 0.
	int A;
	do
	{
	printf("Введите число:");
	scanf_s("%d", &A);
	} while (A!=0);
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task, flag;

	do
	{
		printf("Введите номер задачи:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:
		case 4:task3(); break;
		case 5:task5(); break;
		}

		printf("Хотите продолжить?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}