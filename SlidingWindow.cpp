#include <iostream>
#include <vector>
using namespace std;



vector<int> maxSlidingWindow(vector<int>& A, int k) {
  vector<int> ans;
  int n = A.size();
  int maxNum = A[0];
  bool flag = false;
  for (int i = 0; i < n; i++) {

    maxNum = max(maxNum, A[i]);

    if (i >= k-1) {
      flag = true;
    }

    if (flag) {
      ans.push_back(maxNum);
    }
  }
  return ans;
}



int main() {

  vector<int> nums = {1,-1};
  int k = 1;
  vector<int> v = maxSlidingWindow(nums,k);
  for (int i: v) {
    cout << i << " ";
  }
  return 0;
}