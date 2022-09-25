#include<iostream>

int main(int argc, char* argv[])
{
	int s = 109;
	int v = 0;
	int t = 0;

	std::cin >> v >> t;

	std::cout << (s + (v * t) % s) % s << std::endl;

	return EXIT_SUCCESS;
}