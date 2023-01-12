// longest subarray with equal no of 0s and 1s

#include <iostream>
#include <unordered_map>
using namespace std;

int longest_subarray_with_equal_0s_and_1s(int arr[], int n) {
    unordered_map<int, int> hash_map;
    int max_length = 0, sum = 0;
    hash_map[0] = -1;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] == 0) ? -1 : 1;
        if (hash_map.find(sum) != hash_map.end()) {
            max_length = max(max_length, i - hash_map[sum]);
        } else {
            hash_map[sum] = i;
        }
    }
    return max_length;
}

int main() {
    int arr[] = {1, 0, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << longest_subarray_with_equal_0s_and_1s(arr, n) << endl;
    return 0;
}