#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count = 0;
    int n;
    cout<<"Enter n :\n";
    cin>>n;
    vector<bool>isPrime(n+1,true);
    for (int i = 2; i < n; i++)
    {
        if(isPrime[i]){
            count++;
        }
        for (int j = i*2; j < n; j+=i)
        {
            isPrime[j] = false;
        }
    }
    cout<<count;
    return 0;
}