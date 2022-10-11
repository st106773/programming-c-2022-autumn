#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int res = 0;

	std::cin >> a >> b;
	c = a / b;
	d = b / a;

	res = (a * c + b * d) / (c + d);
	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}