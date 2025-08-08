#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority_element(vector<int>vec){
    int n = vec.size();
    // BRUTE FORCE
    // for (int val: vec)
    // {
    //     int freq = 0;
    //     for (int el: vec)
    //     {
    //         if(val == el){
    //             freq++;
    //         }
    //     }
    //     if(freq>(n/2)){
    //         return val;
    //     } 
    // }
    // return -1;
    // OPTIMIZED BRUTE FORCE
    // sort(vec.begin(), vec.end());
    // int freq = 1;
    // int ans = vec[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (vec[i] == vec[i - 1])
    //     {
    //         freq++;
    //     }
    //     else{
    //         freq = 1;
    //         ans = vec[i];
    //     }  
    //     if(freq > (n/2)){
    //         return ans;
    //     }
    // }
    // return ans;

    // MOORE'S VOTING ALGORITHM
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int>num = {4,4,4,2,1};
    cout<<majority_element(num);
    return 0;
}