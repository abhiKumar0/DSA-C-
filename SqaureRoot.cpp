#include <iostream>
#include <vector>
using namespace std;

int floorSqrt(int n)
{
  int s = 0;
  int e = n;
  int ans = 0;
  while (s <= e)
  {
    int mid = s + (e - s) / 2;
    if (mid * mid <= n)
    {
      ans = mid;
      s = mid + 1;
    }
    else
      e = mid - 1;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int sqrt = floorSqrt(n);
  cout << "The floor of square root of " << n << " is: " << sqrt << endl;

  return 0;
}