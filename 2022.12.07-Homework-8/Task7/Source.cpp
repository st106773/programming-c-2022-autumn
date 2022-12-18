#include <iostream>

int c(char n[], int i)
{
	if (n[i + 1])
	{
		std::cout << n[i] << "*";
		return c(n, ++i);
	}
	else
	{
		std::cout << n[i];
		return 0;
	}
}

int main(int argc, char* argv[])
{
	char t[255] = "";
	std::cin.getline(t, 255);
	c(t, 0);

	return EXIT_SUCCESS;
}