// count distinct element in every window

#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
  int arr[] = {10,10,5,3,20,10,10,55,55,55,55,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 4;
  unordered_map<int,int> umap;
  for(int i = 0; i < k; i++){
    umap[arr[i]]++;
  }
  cout << umap.size() << " ";
  int count = 0; 
  for(int i = k; i < n; i++){
    umap[arr[i-k]]--;
    if(umap[arr[i - k]] == 0)
      umap.erase(arr[i-k]);
    if(umap.find(arr[i]) == umap.end())
      umap[arr[i]]++;
    else
      umap[arr[i]]++;
    cout << umap.size() << " ";
  }
}