#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // 10 3 2
  // 2 6 8
  // 5 7
  vector<int> planets(10);
  vector<bool> must(10, NULL); 
  vector<bool> avoid(10, NULL); 
  must[2] = true;must[6] = true;  must[8] = true;
  avoid[5] = false; avoid[7] = false;
  // vector<vector<int>> routes(3);

  return 0;
}