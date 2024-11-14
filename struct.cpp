#include <iostream>
#include <vector>

using namespace std;

struct stu
{
  string name;
  int age;
};

void swap(int &a, int &b, int &c)
{
  int temp;
  temp = a;
  a = c;
  c = b;
  b = temp;
}

int main()
{
  int nums[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 5;
  vector<int> newar;
  int size = sizeof(nums)/sizeof(int);
  for (int i = size - k; i < size; i++)
  {
    newar.push_back(nums[i]);
  }
  for (int i = 0; i < size-k; i++)
  {
    newar.push_back(nums[i]);
  }
  for (int i=0; i<size;i++){
    nums[i] = newar[i];
    cout<<"i "<<nums[i]<<endl;
  }
}