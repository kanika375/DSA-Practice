#include <iostream>
using namespace std;

int decimal_to_binary(int num){
    int ans = 0;
    int pow = 1;
    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    for (int i = 0; i < 11; i++)
    {
        cout<<decimal_to_binary(i)<<endl;
    }
    return 0;
}