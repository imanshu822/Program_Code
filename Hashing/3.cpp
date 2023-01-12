// find the longest subarray with given sum

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {8,3,1,5,-6,6,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;
    int preSum = 0, res = 0;
    unordered_map<int,int> umap;
    umap.insert({0, -1});
    for(int i = 0; i < n; i++){
        preSum += arr[i];
        if(umap.find(preSum - sum) != umap.end()){
            res = max(res, i - umap[preSum - sum]);
        }
        if(umap.find(preSum) == umap.end()){
            umap.insert({preSum, i});
        }
    }
    cout << res << endl;
    return 0;
}
