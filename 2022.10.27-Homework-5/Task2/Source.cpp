#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	int m = -1000;
	int L = 0;
	int R = 0;
	int index = 0;

	scanf_s("%d", &N);
	int* a = new int[N] {0};

	for (int i = 0; i < N; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &L);
	scanf_s("%d", &R);

	for (int i = L - 1; i < R; ++i)
	{
		if (a[i] > m)
		{
			m = a[i];
			index = ++i;
		}
	}
	std::cout << m << " " << index;

	delete[] a;
	return EXIT_SUCCESS;
}