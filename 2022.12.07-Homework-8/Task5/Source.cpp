#include <iostream>

int f(int st, int en)
{
	if (st == en)
	{
		return 1;
	}
	else if (st > en)
	{
		return 0;
	}
	else
	{
		return f(st + 3, en) + f(st + 5, en);
	}
}

int main(int argc, char* argv[])
{	
	int n = 0;
	scanf_s("%d", &n);

	if (f(1, n))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}