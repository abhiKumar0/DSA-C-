#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



/**
 * @brief Finds the majority element in a vector of integers.
 *
 * The majority element is the element that appears more than ⌊ n/2 ⌋ times in an array of size n.
 * This function uses the Boyer-Moore Voting Algorithm to find the majority element in linear time.
 *
 * @param a A reference to the vector of integers.
 * @return The majority element in the vector.
 *
 * @note The function assumes that the input vector is not empty and contains at least one majority element.
 *
 * @code
 * vector<int> nums = {2,2,1,1,1,1,1,2,2};
 * cout << mejorityElement(nums); // Output: 2
 * @endcode
 */
int mejorityElement(vector<int> &a) {
  int n = a.size();
  int freq = 0, ans = a[0];
  for (int i = 0; i < n; i++){
    if (freq == 0){
      ans = a[i];
    }
    if (ans == a[i]){
      freq++;
    } else {
      freq--;
    }
  }
  return ans;
}



int main()
{
  vector<int> nums = {2,2,1,1,1,1,1,2,2};
  cout << mejorityElement(nums);
  return 0;
}