#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(vector<int> &v, int x){
  int n = v.size();
  for(int i = 0; i < n; i++){
    if (v[i] == x){
      return 0;
    }
  };
  return -1;
}

int main(){
  vector<int> v = {5, 4, 10, 2, 25, 13, 0, 7};
  int x;
  cout<<"Type a number:\n";
  cin>>x;  
  if(sequentialSearch(v, x) == 0){
    cout<<"Found";
  }
  else{
    cout<<"Not found";
  }
  return 0;
}
