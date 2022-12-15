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
int** s(int** arr, int x, int y, int i, int n, int l)
{
	if (i > n * n)
	{
		return arr;
	}
	if (y < n - l && x == l - 1)
	{
		if (arr[x][y])
		{
			arr[++x][++y] = i;
			return s(arr, x, ++y, ++i, n, ++l);
		}
		else
		{
			arr[x][y] = i;
			return s(arr, x, ++y, ++i, n, l);
		}
	}
	else if (y == n - l && x < n - l)
	{
		arr[x][y] = i;
		return s(arr, ++x, y, ++i, n, l);
	}
	else if (y > l - 1 && x == n - l)
	{
		arr[x][y] = i;
		return s(arr, x, --y, ++i, n, l);
	}
	else if (y == l - 1 && x >= l)
	{
		arr[x][y] = i;
		return s(arr, --x, y, ++i, n, l);
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
	delete[] a;
	return EXIT_SUCCESS;
}