#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n = 4;
    int arr[n] = {1,2,3,4,-4,5};
    int maximumSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {   
            int subarraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subarraySum += arr[k];
            }
            maximumSum = max(maximumSum, subarraySum);
        }
    }
    cout<<maximumSum;
    
    return 0;
}