#include <iostream>
#include <cstring>

int c(char n[], int i, int l)
{
	if (i < l / 2 && i * 2 != l - 2)
	{
		std::cout << n[i] << '(';
		return c(n, ++i, l);
	}
	else if (i * 2 == l - 2)
	{
		std::cout << n[i] << n[i + 1];
		return c(n, i + 2, l);
	}
	else if (i * 2 == l - 1)
	{
		std::cout << n[i];
		return c(n, ++i, l);
	}
	else if (i < l)
	{
		std::cout << ')' << n[i];
		return c(n, ++i, l);
	}
	return 0;
}

int main(int argc, char* argv[])
{
	char str[255] = "";
	int len = 0;
	std::cin.getline(str, 255);

	len = strlen(str);

	c(str, 0, len);

	return EXIT_SUCCESS;
}