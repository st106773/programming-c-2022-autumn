#include <iostream>

int main(int argc, char* argv[])
{
	int s = 0;
	int a = 0;
	int b = 0;

	std::cin >> a >> b;
	s = a;
	a = b;
	b = s;

	std::cout << a << " " << b << std::endl;

	return EXIT_SUCCESS;
}