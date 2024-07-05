#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void selectionSort(vector<int> &v){
	for(int i = 0; i < v.size()-1; i++){
		int minPosition = i;
		for(int j = i; j < v.size(); j++){
			if(v[j] < v[minPosition]){
				minPosition = j;
			}		
		}
		/* this is just to avoid more swaps than needed */
		if(i != minPosition){
			int temp = v[i];
			v[i] = v[minPosition];
			v[minPosition] = temp;
		}	
	}	
}

int main(){
	vector<int> v = {2, 8, 5, 3, 9, 4, 1};
	printVector(v);
	selectionSort(v);
	printVector(v);
}
