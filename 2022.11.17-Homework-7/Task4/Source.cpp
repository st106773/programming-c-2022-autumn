#include <iostream>

void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	scanf_s("%d%d", &n, &m);
	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m] {0};
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			scanf_s("%d", &a[i][m - j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	del(a, n);
	return EXIT_SUCCESS;
}