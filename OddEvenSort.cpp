#pragma once

#include "OddEvenSort.h"


void oddEvenSort(int* arr, int n)
//void oddEvenSort(T *array, int arrayLength)
{
	for (int i = 0; i < n; i++) 
	{
		// (i % 2) ? 0 : 1 возвращает 1, если i четное, 0, если i не четное
		for (int j = (i % 2) ? 0 : 1; j < n - 1; j += 2) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}