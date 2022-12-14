#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cnt = 0;
	int cntt = 0;
	std::string yn = "";

	scanf_s("%d", &n);

	int* a = new int[n] {0};
	int* three = new int[n] {0};
	int* four = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);

		if (a[i] % 2 == 0)
		{
			four[cntt] = a[i];
			++cntt;
		}
		else
		{
			three[cnt] = a[i];
			++cnt;
		}
	}

	for (int i = 0; i < cnt; ++i)
	{
		std::cout << three[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < cntt; ++i)
	{
		std::cout << four[i] << " ";
	}

	std::cout << std::endl;

	yn = (cnt <= cntt ? "YES" : "NO");
	std::cout << yn;

	delete[]a;
	return EXIT_SUCCESS;
}