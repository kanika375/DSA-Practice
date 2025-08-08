#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>&vec, int n, int m, int maxPages){
    int stu = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i] > maxPages){
            return false;
        }
        if(pages + vec[i] <= maxPages){
            pages += vec[i];
        }
        else{
            stu++;
            pages = vec[i];
        }
    }
    if(m>=stu){
        return true;
    }
    return false;
    
}

int book_allocation(vector<int>&vec, int n,int m){
    if(m>n){
        return -1;
    }
    int vecSum = 0;
    for (int i = 0; i < n; i++)
    {
        vecSum += vec[i]; 
    }
    int start = 0;
    int end = vecSum;
    int answer = -1;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(isValid(vec, n, m, mid)){
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
    cout<<book_allocation(vec,n,m);
    return 0;
}