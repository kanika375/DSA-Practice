#include <iostream>
using namespace std;

void print_intersection(int arr1[], int arr2[], int size1, int size2){
    for (int i = 0; i < size1; i++)
    {
        bool already_printed = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                already_printed = true;
                break;
            }
        }
        if (already_printed) continue;
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }  
}

int main(){
    int arr1[] = {5,6,7,89,0};
    int arr2[] = {5,77,89,7};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    print_intersection(arr1, arr2, size1, size2);
    return 0;
}