#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findFloor(vector<long long> &v, long long x) {
        // Your code here
        int n = v.size();
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (x > v[i]) {
                index = i;
            }
        }
        return index;
    }

vector<int> getFloorAndCeil(int x, vector<int> &v) {
  vector<int>ans;
  int f = -1, c = INT_MAX;
  for (int i = 0; i < v.size(); i++) {
    if (f < v[i] && v[i] < x) {
      f = max(f, v[i]);
    }
    if (v[i] > x ) {
      c = min(c, v[i]);
    }
  }
  ans.push_back(f);
  if (c == INT_MAX) ans.push_back(-1);
  else ans.push_back(c);
  return ans;
}

int main()
{
  // vector<long long> v = {66, 67, 68, 69, 70, 71 ,72 ,73, 74 ,75 ,76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86 ,87 ,88, 89, 90, 91, 92, 93 ,94 ,95 ,96 ,97, 98, 99, 100, 101, 102, 103, 104, 105 ,106, 107, 108 ,109 ,110, 111, 112, 113 ,114, 115, 116 ,117 ,118 ,119, 120, 121};
  vector<int> a = {5, 6, 8, 9, 6, 5, 5, 6};
  int x = 7;
  vector<int> b = getFloorAndCeil(10, a);
  cout << b[0] << " " << b[1] << " " << endl;

  return 0;
}