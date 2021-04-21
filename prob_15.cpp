#include <iostream>

int main()
{
	long long red[21][21] = {0};
	red[0][0] = 1;
	for (int n = 1; n < 21; n++) {
		for (int r = 0; r <= n; r++) {
			red[r][n] = (r>0 ? red[r-1][n] : 0) + red[r][n-1];
			red[n][r] = red[r][n];
		}
	}
	std::cout << red[21-1][21-1] << "\n";
}