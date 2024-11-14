#include <iostream>
#include <bits/stdc++.h>
#include <time.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
  int sum = 0;
  int count = 0;
}

vector<long long> lcmAndGcd(long long A, long long B)
{
  // code here
  vector<long long> v;
  long long gcd = 1;
  long long lcm;
  long long s = A < B ? A : B;
  for (long long i = 1; i <= s; i++)
  {
    if (A % i == 0 && B % i == 0 && gcd % i != 0)
    {
      gcd *= i;
    }
  }
  lcm = (A * B) / gcd;
  v.push_back(lcm);
  v.push_back(gcd);
  return v;
}

int main()
{
  clock_t start, end;
  start =  clock();
  vector<int> n = {1, 1, 0, 1, 1, 1};
  long long a = 371300 ;
  long long b = 862920;
  vector<long long> v = lcmAndGcd(a, b);
  cout <<v[0]<<" "<<v[1]<<endl;
  end = clock();
  cout << "time: " <<((double) (end - start)) << endl;
  return 0;
}