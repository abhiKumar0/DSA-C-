#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &A, int target)
{
  int s = 0;
  int e = A.size() - 1;
  while (s <= e)
  {
    int m = s + (e - s) / 2;
    if (A[m] == target)
    {
      return m;
    }
    if (A[s] <= A[m])
    {
      if (A[s] <= target && target <= A[m])
      {
        e = m - 1;
      }
      else
      {
        s = m + 1;
      }
    }
    else
    {
      if (A[m] <= target && target <= A[e])
      {
        s = m + 1;
      }
      else
      {
        e = m - 1;
      }
    }
  }
  return -1;
}
int main()
{

  return 0;
}