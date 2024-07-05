#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		for(int j = i; j > 0; j--){
			if(v[j] < v[j-1]){
				int temp = v[j];
				v[j] = v[j-1];
				v[j-1] = temp;
			}
		}
	}
}

int main(){
	vector<int> v = {2, 8, 5, 3, 9, 4};
	printVector(v);
	insertionSort(v);
	printVector(v);
}
