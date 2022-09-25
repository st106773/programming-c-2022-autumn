#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int sum = 0;

	std::cin >> a >> b >> c >> d >> e >> f;

	sum = (d - a) * 3600 + (e - b) * 60 + f - c;

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}