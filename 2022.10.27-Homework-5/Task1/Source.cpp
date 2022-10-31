#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	int cnt = 0;
	int num = 0;

	scanf_s("%d", &N);
	int* a = new int[N] {0};

	for (int i = 0; i < N; ++i)
	{
		cnt = (num == a[i] ? ++cnt : cnt);

	}
	std::cout << cnt;
	delete[] a;

	return EXIT_SUCCESS;
}