#include <iostream>
int main(int argc, char* argv[])
{
int n = 0;
int c = 0;
std::cin >> n;

c = n / 10;
std::cout << c * (c + 1) + 25;

return EXIT_SUCCESS;
}