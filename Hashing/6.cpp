// Longest Consecutive Subsequence

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
    int arr[] = {1,3,4,3,3,2,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    unordered_set<int> uset;
    for(int i = 0; i < n; i++){
        uset.insert(arr[i]);
    }
    for(int i = 0;i < n; i++){
        int curr = 0;
        if(uset.find(arr[i] - 1) != uset.end()){
            for(int j = i; j < n; j++){
                if(uset.find(arr[j] + 1) != uset.end())
                    curr++;
                else
                    break;
            }
            res = max(res, curr);
        }
    }
    cout << res << endl;
    return 0;
}
