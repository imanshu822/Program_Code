// Longest common span with same in binary array;

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
  int arr[] = {0,1,0,0,0,1,0};
  int arr2[] = {1,0,1,0,0,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int a[n];
  for(int i = 0; i < n; i++){
    a[i] = arr[i] - arr2[i];
  }
  unordered_map<int,int> umap;
  int preSum = 0, res = 0;
  umap[0] = -1;
  for(int i = 0; i < n; i++){
    preSum += a[i];
    if(umap.find(preSum) == umap.end()){
      umap[preSum] = i; 
    }
    else
      res = max(res, i - umap[preSum]);
  }
  cout << res << endl;
  
}