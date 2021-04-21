#include <iostream>
using namespace std;

int main(){
    int x = 1;
    int temp = 0;
    while (x < 1000)
    {
        if (x % 3 == 0 || x % 5 == 0)
        {
            temp = x + temp;
        }
        x = x + 1;
    }
    cout<<"Suma total: "<<temp;
}