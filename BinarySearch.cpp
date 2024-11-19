#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
  int n = nums.size();
  if (nums[n - 1] < target)
  {
    return n;
  }
  if (nums[0] >= target) return 0;
  int index;
  int start = 0;
  int end = n - 1;
  int flag = 0;
  int bigIndex = end;

  for (int i = start; i < end; i++)
  {
    int mid = (start + end) / 2;
    if (nums[mid] == target)
    {
      index = mid;
      flag++;
      break;
    }
    else if (nums[mid] > target)
    {
      end = mid;
      bigIndex = end;
    }
    else
    {
      start = mid;
    }
  }
  if (flag > 0)
  {
    return index;
  }
  else
  {
    return bigIndex;
  }
}

int main()
{
  vector<int> nums = {1,3,5};
  int n;
  cin >> n;
  cout << searchInsert(nums, n) << endl;
  return 0;
}