#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findUnion(vector<int>v1, vector<int>v2){
  set<int> s;
  vector<int> u;
  for (int i = 0; i < v1.size(); i++){
    s.insert(v1[i]);
  }
  for (int i = 0; i < v2.size(); i++){
    s.insert(v2[i]);
  }
  for (int i:s){
    u.push_back(i);
  }
  return u;
}

int main()
{
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {1, 2, 3, 6, 7};
  vector<int> u = findUnion(v1, v2);
  for (int i : u){
    cout << i << " ";
  }
  return 0;
}