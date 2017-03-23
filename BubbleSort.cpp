#pragma once

#include "BubbleSort.h"

void bubbleInc(int *mass, int count, int &Reshuffle)
{
	for (int i = 1; i < count; ++i)
	{
		for (int r = 0; r < count - i; r++)
		{
			if (mass[r] > mass[r + 1])
			{
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
				Reshuffle++;
			}
		}
	}
}

void bubbleDec(int *mass, int count)
{
	for (int i = 1; i < count; ++i)
	{
		for (int r = 0; r < count - i; r++)
		{
			if (mass[r] < mass[r + 1])
			{
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
			}
		}
	}
}