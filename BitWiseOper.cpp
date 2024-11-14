#include <iostream>
using namespace std;
/**
 * @brief This is the main function of the program. It demonstrates the usage of bitwise operators in C++.
 *
 * @return 0 to indicate successful program execution.
 *
 * The program demonstrates the following bitwise operators:
 * - & operator: Performs a bitwise AND operation.
 * - | operator: Performs a bitwise OR operation.
 * - ^ operator: Performs a bitwise XOR operation.
 * - ~ operator: Performs a bitwise NOT operation.
 * - << operator: Performs a left shift operation, equivalent to multiplying by 2.
 * - >> operator: Performs a right shift operation, equivalent to dividing by 2.
 *
 * The results of each operation are printed to the console.
 */
int main()
{
  // & operator n&0 = 0 , n&n = n;
  cout << (4 & 8)<< endl;// 0
  // | operator n|0 = n, n|n = n
  cout << (4 | 8)<< endl;// 12
  // ^ operator n^0 = n, n^n = 0
  cout << (4 ^ 8)<< endl;// 12
  // ~ operator ~n = 1-n
  cout << (~4) << endl; // -5
  // << operator (n<<1) = n*2
  cout << (4 << -1) << endl; // 8
  // >> operator (n>>1) = n/2
  cout << (8 >> 1) << endl; // 4
  return 0;
}
