#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(vector<int>&vec, int n, int m, int minDistance){
    int cows = 1;
    int lastpos = vec[0];
    for (int i = 1; i < n; i++)
    {
        if(vec[i] - lastpos >= minDistance){
            cows++;
            lastpos = vec[i];
        }
        if(cows == m){
            return true;
        }
    }
    return false;
    
}

int cow_problem(vector<int>&vec, int n,int m){ // O(nlogN)
    sort(vec.begin(), vec.end());
    int start = 1;
    int end = vec[n-1] - vec[0];
    int answer = -1;
    while(start<=end){       // O(logN) ; N = range
        int mid = start + (end - start) / 2;
        if(isValid(vec, n, m, mid)){  // O(n)
            answer = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return answer;
}

int main(){
    vector<int>vec = {2,1,4,8,9};
    int n = 5, m = 3;
    cout<<cow_problem(vec,n,m);
    return 0;
}