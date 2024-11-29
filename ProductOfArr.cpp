#include <iostream>
#include <vector>
using namespace std;

vector<int> product(vector<int> &a)
{
  int n = a.size();
  vector<int> result;
  for (int i = 0; i < n; i++)
  {
    int product = 1;
  }
}

//O(n) time complexity
vector<int> productOPt(vector<int> &A)
{
  int n = A.size();
  vector<int> result(n);
  vector<int> prefix(n, 1);
  vector<int> suffix(n, 1);

  //Prefix
  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] * A[i - 1];
  }
  
  //Suffix
  for (int i = n - 2; i >= 0; i--)
  {
    suffix[i] = suffix[i + 1] * A[i + 1];
  }

  //Product of all elements in the array
  for (int i = 0; i < n; i++)
  {
    result[i] = prefix[i] * suffix[i];
  }
  return result;
}

//For O(n) time complexity and O(n) space complexity
vector<int> productOptimal(vector<int> &A) {
  int n = A.size();
  vector<int> ans(n, 1);// Initialize result vector with 1s

// Forward pass: Compute prefix product
  for (int i = 1; i < n; i++) {
    ans[i] = ans[i-1] * A[-1];
  }


 // Backward pass: Compute suffix product
  int suffix = 1;
  for (int i = n-2; i >= 0; i--) {
    suffix *= A[i+1];// Update suffix with the next element
    ans[i] *= suffix;// Multiply current ans[i] with suffix
  }
  return ans;
}



int main()
{
  vector<int> a = {1, 2, 3, 4};
  vector<int> result = productOPt(a);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}

/*
Purpose:

This function calculates the product of all elements in the array except the current element, without using division. It solves the problem optimally with O(n)O(n) time complexity and O(n)O(n) space complexity.
Input:

    A reference to a vector A of integers, where each element represents an input number.

Output:

    A vector of integers ans, where ans[i] contains the product of all elements in A except A[i].

Approach:

The function computes the result in two passes:

    Forward Pass (Prefix Product):
        Compute the product of all elements before the current element (prefix product) and store it in ans.

    Backward Pass (Suffix Product):
        Compute the product of all elements after the current element (suffix product) and multiply it with the existing value in ans.

Steps:

    Initialization:
        Create a vector ans of size n initialized to 1.
        The initial value 1 is a neutral value for multiplication, allowing the prefix and suffix products to be accumulated.

    Forward Pass:
        Starting from the second element (index 1), update ans[i] to hold the product of all elements to its left.
        For this, use ans[i] = ans[i-1] * A[i-1].

    Backward Pass:
        Initialize a variable suffix to 1. This will hold the product of all elements to the right of the current index.
        Traverse the array from the second-to-last element (n-2) to the first element (index 0).
        Multiply suffix with the next element (A[i+1]), then update ans[i] as ans[i] *= suffix.

    Result:
        After the two passes, ans[i] contains the product of all elements except A[i].

*/