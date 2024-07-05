#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void bubbleSort(vector<int> &v){
	for(int i = 0; i < (v.size()-1); i++){
		for(int j = 0; j < (v.size()-i-1); j++){
			if(v[j] > v[j+1]){
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
}

int main(){
	vector<int> v = {2, 8, 5, 3, 9, 4, 1};
	printVector(v);
	bubbleSort(v);
	printVector(v);
}
