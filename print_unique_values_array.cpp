#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        bool is_Unique = true;
        for (int j = 0; j < size; j++)
        {
            if( (i!=j) && (arr[i] == arr[j]) ){
                is_Unique = false;
                break;
            }
        }
        if(is_Unique){
            cout<<arr[i]<<" ";
        } 
    }
    
}

int main(){
    int size = 7;
    int num[size] = {3, 6, 8, 2, 1, 67, 1};
    printUniqueValues(num, size);
    return 0;
}