#include <iostream>

int main(int argc, char* argv[])
{
	{
		int n = 0;
		int a = 1;
		int b = 0;
		int d = 0;

		std::cin >> n;

		do
		{
			b = 0;
			d = a - n;

			do
			{
				if (d >= 0)
				{
					std::cout << n - d << " ";
				}
				else
				{
					std::cout << n + d << " ";
				}
				++b;
				++d;
			} while (b < n);

			std::cout << std::endl;
			++a;

		} while (a <= n);

		return EXIT_SUCCESS;
	}
}