#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	int mi = 1000;
	int ma = 0;
	int t = 0;

	scanf_s("%d", &N);

	int* a = new int[N] {0};
	for (int i = 0; i < N;++i)
	{
		scanf_s("%d", &a[i]);
		mi = (mi > a[i] ? a[i] : mi);
		ma = (ma < a[i] ? a[i] : ma);
	}
	for (int i = 0; i < N; ++i)
	{
		t = (a[i] == ma ? mi : a[i]);
		std::cout << t << " ";
	}
	delete[] a;
	return EXIT_SUCCESS;
}