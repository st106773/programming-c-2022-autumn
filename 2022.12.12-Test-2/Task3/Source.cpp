#include <iostream>
std::string pri(int a, int b)
{
	if (i * i > a)
	{
		return "prime";
	}
	else if (a % i == 0)
	{
		return "composite";
	}
	return pri(a, ++i);
}
int main(int argc, char* argv[])
{
	int c = 0;
	std::cin >> c;
	std::cout << pri(c, 2);
	return EXIT_SUCCESS;
}