#include <iostream>
#include <vector>
using namespace std;


int maxArea(vector<int> &height) {
  int n = height.size();
  int area = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      int width = j-i;
      cout << width << " " << height[j] << " " << i << " " << j << endl;
      area = width*height[j];
    }
  }
  return area;
}

int main()
{
  vector<int> height = {1,8,6,2,5,4,8,3,7};
  int area = maxArea(height);
  cout << "The maximum area of the histogram is: " << area << endl;

  return 0;
}