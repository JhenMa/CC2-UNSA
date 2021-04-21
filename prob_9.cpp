#include <iostream>

int main()
{
	for (int a = 1; a < 1000/3; a++)
		for (int b = a+1; b < (1000-a) / 2; b++) {
			int c = 1000-a-b;
			if (c < a+b && a*a + b*b == c*c) {
				std::cout << a*b*c << "\n";
				return 0;
			}
		}
}