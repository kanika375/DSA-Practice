#include <iostream>
using namespace std;

int binary_to_decimal(int num){
    int ans = 0;
    int pow = 1;
    while(num > 0){
        int rem = num % 10;
        ans += (rem*pow);
        num /= 10;
        pow*=2;
    }
    return ans;
}

int main(){
    cout<<binary_to_decimal(101010);
    return 0;
}