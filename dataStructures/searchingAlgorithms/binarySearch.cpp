#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& v, int x){
  int l = 0;
  int r = v.size();
  while(l < r){
    int m = (l+r)/2;
    if(v[m] == x){
      return 0;
    }
    if(v[m] < x){
      l = m + 1;
    }
    else{
      r = m;  
    }
  };
  return -1;
}

int main(){
  vector<int> v = {2, 3, 5, 6, 8, 9, 10, 12};
  int x;
  cout<<"Type a number:\n"; 
  cin>>x;
  if (binarySearch(v, x) == 0){
    cout<<"Found";
  }
  else{
    cout<<"Not found";
  }
  return 0;
}
