#include <iostream>
using namespace std;

int main(){
    long long num = 600851475143;
    for(long long i=2;i<num ;i++){
        while(num%i==0 && num!=i){
            num=num/i;
        }
    }
    cout<<num;
}