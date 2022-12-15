#include <iostream>

int* m(int a, int b, int* arr)
{
	if (a * 2 >= b)
	{
		return arr;
	}
	else
	{
		int n = arr[a];
		arr[a] = arr[b - a];
		arr[b - a] = n;
		return m(++a, b, arr);
	}
}
int main(int argc, char* argv[])
{
	int l = 0;
	std::cin >> l;
	int* a = new int[l] {0};

	for (int i = 0; i < l; ++i)
	{
		std::cin >> a[i];
	}
	a = m(0, l - 1, a);
	for (int i = 0; i < l; ++i)
	{
		std::cout << a[i] << " ";
	}
	delete[] a;
	return EXIT_SUCCESS;
}