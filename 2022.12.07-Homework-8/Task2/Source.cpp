#include <iostream>

int p(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return p(n - 1) + p(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	std::cout << p(n);
	return EXIT_SUCCESS;
}