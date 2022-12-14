#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int R = 0;
	int L = 0;
	scanf_s("%d", &n);
	
	int* a = new int[n] {0};
	
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &m);

	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", &L);
		scanf_s("%d", &R);

		for (int j = L - 1; j < R; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}
	delete []a;
	
	return EXIT_SUCCESS;
}