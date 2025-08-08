#include <iostream>
using namespace std;

double powExponentiation(double x, int n){
    if(x==0 || x==1){return x;}

    double ans = 1;
    long long N = n;

    if(n<0){N = -n;
    x = 1.0/x;}

    while (N>0)
    {
        if(N%2==0){
            N/=2;
            x*=x;
        }
        else{
            ans*=x;
            N--;
        }
    }
    
    return ans;
}

int main(){
    cout<<powExponentiation(2,-5);
    return 0;
}