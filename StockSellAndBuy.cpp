#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &p){
  int maxProfit = 0;
  int minVal = p[0];
  int n = p.size();
  for (int i = 1; i < n; i++){
    if (p[i] > minVal) {
      maxProfit = max(maxProfit, p[i] - minVal);
    }
    minVal = min(minVal, p[i]);
  }
  return maxProfit;
}

int main()
{


  return 0;
}