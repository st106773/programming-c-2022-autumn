#include <iostream>

void hanoi(int num, int from, int to, int buff)
{
	if (num)
	{
		hanoi(num - 1, from, buff, to);
		std::cout << "Disk " << num << " move from " << from << " to " << to << std::endl;
		hanoi(num - 1, buff, to, from);
	}
}

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	hanoi(num, 1, 2, 3);

	return EXIT_SUCCESS;
}