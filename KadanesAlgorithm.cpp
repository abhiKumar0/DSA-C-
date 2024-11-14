#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Finds the maximum subarray sum in a given array using Kadane's algorithm.
 *
 * Kadane's algorithm is an efficient way to find the maximum subarray sum in an array.
 * It iterates through the array, maintaining the maximum sum seen so far and the current sum.
 * If the current sum becomes negative, it is reset to zero.
 *
 * @param a The input array of integers.
 * @return The maximum subarray sum.
 */
int maximumSubarray(vector<int> &a){
  int maxSum = 0;
  int currentSum = 0;
  for (int i: a){
    currentSum += i;
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0) {
      currentSum = 0;
    }
  }
  return maxSum;
}



void subarrays(vector<int> &a){
  for (int st=0; st<a.size(); st++) {
    for (int end=st; end<a.size(); end++) {
      for (int i = 0; i<end; i++) {
        cout<<a[i];
      }
      cout<<" ";
    }
    cout<<endl;
  }
}



int main(){
  vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
  cout<<"The maximum subarray is "<<maximumSubarray(arr)<<endl;
  vector<int> b = {1, 2, 3, 4, 5};
  subarrays(b);
  return 0;
}