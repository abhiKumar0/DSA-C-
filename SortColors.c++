#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &v) {
  int n = v.size();
  int mid = 0, high = n-1, low = 0;
  int temp;
  while (mid <= high) {
    if (v[mid] == 0) {
      temp = v[mid];
      v[mid] = v[low];
      v[low] = temp;
      low++;
      mid++;
    }
    else if (v[mid] == 1) {
      mid++;
    } else {
      temp = v[mid];
      v[mid] = v[high];
      v[high] = temp;
      high--;
    }
  }
}

int main()
{
  vector<int> v = {0, 2, 2, 1, 0, 1, 0};
  sortColors(v);
  for (int i : v) {
    cout << i << " ";
  }
  return 0;
}