#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
  int n = nums.size();
  int sum = 0;
  int count = 0;
  for (int i : nums)
  {
    if (i == 1)
    {
      count++;
      sum = max(sum, count);
      cout << "i: " << i << " sum: " << sum << endl;
    }
    else
    {
      count = 0;
    }
  }
  return sum;
}

int main()
{
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  cout << findMaxConsecutiveOnes(nums) << endl; // Output: 3

  return 0;
}