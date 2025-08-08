#include <iostream>
using namespace std;

void print_name(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<"\n"; 
    print_name(i+1,n); 
}

int main(){
    int n = 5;
    print_name(1,n);
    return 0;
}