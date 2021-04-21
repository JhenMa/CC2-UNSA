#include <iostream>
using namespace std;

int dif_sum_cuadrados_cuadrado_sum(int);

int main(){
    cout<<dif_sum_cuadrados_cuadrado_sum(100);
    return 0;
}

int dif_sum_cuadrados_cuadrado_sum(int num){
    int sum_cuadrados=0;
    int cuadrado_sum=0;
    int dif=0;

    for(int i = 1; i <= num; i++){
        sum_cuadrados += i*i;
        cuadrado_sum += i;
    }
    dif= (cuadrado_sum*cuadrado_sum) - sum_cuadrados;
    return dif;
}