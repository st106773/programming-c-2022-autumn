#include <iostream>

int** array(int n)
{
	int** r = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		r[i] = new int[n] {0};
	}
	return r;
}
void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
int** s(int** arr, int x, int y, int i, int n, int z)
{
	if (i > n * n)
	{
		return arr;
	}
	if (y < n - z && x == z - 1)
	{
		if (arr[x][y])
		{
			arr[++x][++y] = i;
			return s(arr, x, ++y, ++i, n, ++z);
		}
		else
		{
			arr[x][y] = i;
			return s(arr, x, ++y, ++i, n, z);
		}
	}
	else if (y == n - z && x < n - z)
	{
		arr[x][y] = i;
		return s(arr, ++x, y, ++i, n, z);
	}
	else if (y > z - 1 && x == n - z)
	{
		arr[x][y] = i;
		return s(arr, x, --y, ++i, n, z);
	}
	else if (y == z - 1 && x >= z)
	{
		arr[x][y] = i;
		return s(arr, --x, y, ++i, n, z);
	}
}
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int** a = array(n);
	a = s(a, 0, 0, 1, n, 1);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	del(a, n);
	return EXIT_SUCCESS;
}