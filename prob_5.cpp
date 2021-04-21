#include <iostream>
using namespace std;

long long MCM(long long, long long);
long long ArrMCM(int, int);

int arr[20];

int main()
{
	for (int n = 0; n < 20; n++)
		arr[n] = n + 1;
	cout << ArrMCM(0, 19) << "\n";
}

long long MCM(long long n1, long long n2)
{
	long long minimo = min(n1, n2);
	int factor = 1;
	for (int n = 2; n <= minimo; n++)
		while (n1 % (factor*n) == 0 && n2 % (factor*n) == 0)
			factor *= n;
	return n1 * n2 / factor;
}

long long ArrMCM(int izq, int der)
{
	if (der - izq <= 1)
		return MCM(arr[izq], arr[der]);
	int med = (izq + der) / 2;
	return MCM(ArrMCM(izq, med), ArrMCM(med + 1, der));
}
