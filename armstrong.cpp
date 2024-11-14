#include <iostream>

using namespace std;

int digits(int n) {
  int count = 0;
  while (n != 0){
    count++;
    n /= 10;
  }
  return count;
}

int power(int n, int m){
  int sum = 1;
  for (int i=0; i<m; i++){
    sum = sum*n;
  }
  return sum;
}

void isArmstrong() {
  for (int i = 0; i<=100000; i++) {
    int arm = 0;
    int rem;
    int j = i;
    int n_dig = digits(i);
    while (j != 0) {
      rem = j%10;
      arm = arm + power(rem, n_dig);
      j /= 10;
    }
    if (arm == i) 
      cout <<i<<" ";
  }
}

int main()
{
  int n;
  // cin>>n;
  isArmstrong();
  
  return  0;
}