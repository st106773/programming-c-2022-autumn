#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int l = 0;

	scanf_s("%d%d%d%d%d", &n, &a, &b, &c, &d);

	int* ar = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		ar[i] = i + 1;
	}
	for (int i = 0; i < (b - a + 1) / 2; ++i)
	{
		l = ar[i + a - 1];
		ar[i + a - 1] = ar[b - 1 - i];
		ar[b - 1 - i] = l;
	}
	for (int i = 0; i < (d - c + 1) / 2; ++i)
	{
		l = ar[i + c - 1];
		ar[i + c - 1] = ar[d - 1 - i];
		ar[d - 1 - i] = l;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << ar[i] << " ";
	}
	delete[]ar;
	return EXIT_SUCCESS;
}