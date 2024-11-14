#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
  int ans = 0;
  for (int val: nums){
    ans ^= val;
  }
  return ans;
}

void reverse(vector<int> &v) {
  vector<int> a;
  for (int i = v.size()-1; i>=0; i--){
    a.push_back(v[i]);
  };
  v.clear();
  for (int i: a){
    v.push_back(i);
  }

}

int main()
{
  /*
  vector<int> vec; // Vector of size 0;
  vector<int> a = {1, 2, 3};
  vector<int> b(5, 0); // vecotr of size 5 with each element being 0
  a.size(); // return number of elements
  a.push_back(5); // Push element at the last position of the vector
  a.pop_back(); // Pop or remove element at the last position of the vector
  a.front(); // return the first element
  a.at(3); // return the 3rd element
*/



  vector<int> v = {4, 1, 2, 2, 1};
  vector<int> b = {4, 2, 4, 7, 1, 9};
  cout << singleNumber(v) << endl;
  
  reverse(b);
  for (int i:b){
    cout << i<<" ";
  }

  return 0;
}

/*
  Static vs Dynamic Memory Allocation
  static = comiple time (Stack)
  dynamic = runtime (Heap)


*/