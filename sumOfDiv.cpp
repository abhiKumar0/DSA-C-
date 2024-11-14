#include <iostream>

using namespace std;

int sumOfDiv(int n) {
  int sum = 0;
  for (int i = 1; i<=n; i++) {
    // for (int j = 1; j<=i; j++) {
    //   if (i%j == 0){
    //     sum += j;
    //   }
    // }
    sum = sum + (i+(n/i));
    cout<<sum<<endl;
  }
  return sum-n+1;
}

int main()
{
  cout <<sumOfDiv(6)<<endl;

  return 0;
}