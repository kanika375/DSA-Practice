#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool isValid(vector<int>&vec, int n, int m, int minAllowedTime){
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if(time + vec[i] <= minAllowedTime){
            time += vec[i];
        }
        else{
            painters++;
            time = vec[i];
        }
    }
    if(m>=painters){
        return true;
    }
    return false;
    
}

int painter_problem(vector<int>&vec, int n,int m){ // O(nlogN)
    int vecSum = 0;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++)  // O(n)
    {
        vecSum += vec[i]; 
        maxVal = max(maxVal, vec[i]);
    }
    int start = maxVal;
    int end = vecSum;
    int answer = -1;
    while(start<=end){       // O(logN) ; N = range
        int mid = start + (end - start) / 2;
        if(isValid(vec, n, m, mid)){  // O(n)
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return answer;
}

int main(){
    vector<int>vec = {2,1,3,4};
    int n = 4, m = 2;
    cout<<painter_problem(vec,n,m);
    return 0;
}