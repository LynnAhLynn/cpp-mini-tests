
#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec){
	
	int result {0};
	int res {0};
	
	for (int i {0}; i < vec.size()-1 ; i++){
		for (int j {i+1}; j < vec.size() ; j++){
			res = vec[i]* vec[j];
			result += res;
		}
}
	
	return result;
}

int main() {
	
	vector<int> nums {1,2,3};
	
	cout << calculate_pairs(nums) << endl;
	
	return 0;
}

