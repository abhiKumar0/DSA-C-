#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void pra(vector<int> &a) {
  for (int i = 0; i<a.size(); i++) {
    cout <<a[i]<<" ";
  }
  cout<<endl;
}

void move(vector<int> &nums) {
  for(int i = 0; i<nums.size(); i++) {
    if (nums[i] == 0) {
      nums.erase(nums.begin()+i);
      nums.push_back(0);
    }
  }
}

int main()
{
  // vector<int> nums = {1, 2, 0, 3, 0, 5};
  vector<int> nums = {0,1,0};
  move(nums);
  pra(nums);
  return 0;
}