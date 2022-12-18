#include <iostream>

char c(std::string n, int i, char s)
{
	if (n[i])
	{
		s = (n[i] > s ? n[i] : s);
		return c(n, ++i, s);
	}
	else
	{
		return s;
	}
}

int main(int argc, char* argv[])
{
	std::string t;
	std::cin >> t;
	std::cout << c(t, 0, 0);

	return EXIT_SUCCESS;
}