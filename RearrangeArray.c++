#include <iostream>
#include <vector>
using namespace std;

void pv(vector<int> a) {
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;
}

void rearrange(vector<int> &nums) {
  int s = nums.size();
  vector<int> p;
  vector<int> n;
  for (int i : nums) {
    if (i > 0) {
      p.push_back(i);
    } else {
      n.push_back(i);
    }
  }
  pv(p);
  pv(n);
  int i = 0, j = 0;
  int k;
  for (k = 0; k < nums.size(); k++) {
    if (k % 2 != 1) {
      nums[k] = p[i];
      i++;
    } else {
      nums[k] = n[j];
      j++;
    }
  }
}

int main()
{
  vector<int> nums = {1, -1};
  rearrange(nums);
  pv(nums);
  return 0;
}