#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @brief Function to find all divisors of a given number.
 *
 * This function takes an integer as input and finds all divisors of that number.
 * The divisors are stored in a vector and then sorted in ascending order.
 * Finally, the divisors are printed to the console.
 *
 * @param n The number for which to find all divisors.
 *
 * @return void. The function does not return a value.
 */
void allDivisors(int n){
    vector<int> ls;
  for (int i = 1; i*i <= n; i++){
    if (n % i == 0){
      ls.push_back(i);
    }
    if ((n / i) != i){
      ls.push_back(n/i);
    }
  }
  sort(ls.begin(), ls.end());
  for (int i: ls){
      cout << i << " ";
  }
}


int main()
{
  int n = 24;
  allDivisors(n);

  return 0;
}