#include <iostream>
#include <math.h>

using namespace std;

int Nu = 0;	
int primos[10000];

bool Primo(int);

int main()
{   
	for (int n = 2;; n++) {
		if (Primo(n)) {
			if (Nu == 10000) {
				cout << n << endl;
				break;
			}
			primos[Nu++] = n;
		}
	}
}

bool Primo(int n)
{
	for (int p = 0; p < Nu && primos[p] <= sqrt((double)n	); p++)
		if (n % primos[p] == 0)
			return false;
	return true;
}