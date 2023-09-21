// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	const int N = 4;
	int arr[N] = { 1, 2, 3, 4 };

	int el = arr[0];
	for (int i = 1; i < N; ++i)
		arr[i - 1] = arr[i];
	arr[N - 1] = el;

	for (int i = 0; i < N; ++i)
		printf(" ", arr[i]);
}

