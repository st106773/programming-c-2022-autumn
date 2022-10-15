#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;

	std::cin >> n;
	do
	{
		b = 0;
		do
		{
			std::cout << a + b << " ";
			++b;
		} while (b <= n);
		std::cout << std::endl;
		++a;
	} while (a < n);

	return EXIT_SUCCESS;
}