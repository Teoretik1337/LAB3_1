#include <iostream>
#include <ctime>
#include "OddEvenSort.h"  
#include "BubbleSort.h"
#include <windows.h>

using namespace std;

//void testBubbleSort(int *n); //���� ���������� ���������
//void testOddEvenSort(int n);

void testSort(int *n, int numberSort);

int main()
{
	setlocale(0,"");
	srand(time(0));

	int n[16] = { 15, 1, 2, 3, 4, 5, 10, 15, 20, 25, 30, 50, 75, 100, 250, 500 };

	//testBubbleSort(n); // ���������� ���������

	{
		system("cls");
		testSort(n, 1);
		system("pause");
	}
	{
		system("cls");
		testSort(n, 2);
		system("pause");
	}
	

	//testOddEvenSort(6);

	cout << "Time : " << clock() / 1000.0 << endl;

	system("pause");
}


void testSort(int *n, int numberSort)
{
	for (int i = 1; i <= n[0]; i++)
	{
		unsigned int startTime = clock(); // ��������� �����

		int *mas = new int[n[i]];
		for (int j = 0; j < n[i]; j++)
		{
			mas[j] = rand() % 100 - rand() % 100;
		}

		int Reshuffle = 0;

		if (numberSort == 1)
		{
			bubbleInc(mas, n[i], Reshuffle);
		}
		else if (numberSort == 2)
		{
			oddEvenSort(mas, n[i]);
		}
		unsigned int endTime = clock(); // �������� �����
		printf("������ �������: %i\n", n[i]);
		cout << "����� ������: " << (endTime - startTime) / 1000.0 << " ���-�� ������������: " << Reshuffle << endl;
		printf("\n");
	}
}