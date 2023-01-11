// Subarray with given sum

#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int arr[] = {5, 8, 6, 13, 3, -1};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int z = 22;
    unordered_set<int> uset;
    uset.insert(0);
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(uset.find(sum - z) != uset.end()){
            cout << "YES" << endl;
            return 0;
        }
        uset.insert(sum);
    }
    cout << "NO" << endl;
    return 0;
}
