#include <iostream>

int main(int argc, char* argv[])
{
	int x = 1;
	int cnt = 0;

	while (x != 0)
	{
		std::cin >> x;
		if (x % 2 == -1)
		{
			++cnt;
		}
	}
	std::cout << cnt;

	return EXIT_SUCCESS;
}