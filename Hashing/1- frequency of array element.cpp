// frequency of array element

#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int arr[]= {1,1,2,2,3,4,5};
	int n = 7;
	for(int i = 0; i < n; i++){
		bool flag = false;
		for(int j = 0; j < i; j++){
			if(arr[i] == arr[j]){
				flag = true;
				break;
			}
		}
		if(flag == true)
			continue;
		int count = 1;
		for(int j = i+1; j < n; j++){
			if(arr[i] == arr[j])
				count++;
		}
		cout << arr[i] << " " << count << endl;
	}
}
