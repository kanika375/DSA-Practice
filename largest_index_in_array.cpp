#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size = 6;
    int index;
    int number[size] = {31,2,377,4,57,6};
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (number[i] > largest) {
            largest = number[i];
            index = i;
        }
    }
    cout<<index;
    return 0;
}