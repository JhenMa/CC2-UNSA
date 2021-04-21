#include <iostream>
using namespace std;

int fib(int);

int main(){
    long long x = 1;
    long long temp = 0;
    while (fib(x) <= 4000000)
    {
        if (fib(x) % 2 == 0)
        {
            temp = fib(x) + temp;
        }
        x = x + 1;
    }
    cout<<"Suma total: "<<temp;
}

int fib(int a){
    if (a == 1)
        return 1;
    else if (a == 2)
        return 2;     
    else
        return fib(a-1) + fib(a-2);
}
