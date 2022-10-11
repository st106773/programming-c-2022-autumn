#include <iostream>

int main(int arg, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;
	if ((a + b <= c) || (b + c <= c) || (a + c <= b))
	{
		std::cout << "IMPOSSIBLE";
	}
	else if ((a * a + b * b < c * c) || (a * a > c * c + b * b) || (b * b > a * a + c * c))
	{
		std::cout << "OBTUSE";
	}
	else if ((a * a + b * b > c * c) && (a * a < b * b + c * c) && (b * b < a * a + c * c))
	{
		std::cout << "ACUTE";
	}
	else
	{
		std::cout << "RIGHT";
	}
	return EXIT_SUCCESS;
}