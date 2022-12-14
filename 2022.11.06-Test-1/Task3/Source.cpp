#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int fi = 0;
	int fj = 0;
	int a = 0;
	int b = 1;
	int c = 0;
	int max = 1;

	std::cin >> i >> j;

	for (int t = 1; t < i + j; t++)
	{
		c = b;
		b = a + b;
		a = c;
		if (t == i - 1)
		{
			fi = b;
		}
		if (t == j - 1)
		{
			fj = b;
		}
		if (fi > 0 && fj > 0)
		{
			break;
		}
	}

	if (fi > fj)
	{
		c = fi;
		fi = fj;
		fj = c;
	}

	for (int t = 1; t <= fi; t++)
	{
		if ((fi % t == 0) && (fj % t == 0))
		{
			max = t;
		}
	}

	std::cout << max % 1000000000;

	return EXIT_SUCCESS;
}