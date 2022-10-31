#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	int ma = 0;

	scanf_s("%d", &N);

	int* a = new int[N] {0};
	for (int i = 0; i < N; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < N + 2; ++i)
	{
		if ((a[i % N] + a[(i + 1) % N] + a[(i + 2) % N]) > ma)
		{
			ma = a[i % N] + a[(i + 1) % N] + a[(i + 2) % N];
		}
	}

	std::cout << ma;

	delete[] a;

	return EXIT_SUCCESS;
}