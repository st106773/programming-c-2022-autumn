#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	int h = 0;
	int num = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &h);

	for (int i = 0; i < n + 1; ++i)
	{
		if (h <= a[i] && i < n)
		{
			++num;
		}
		else
		{
			std::cout << ++num;
			break;
		}
	}
	delete[] a;
	return EXIT_SUCCESS;
}