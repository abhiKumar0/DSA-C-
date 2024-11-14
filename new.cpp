#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
  // vector<int> s = {23,4,1,6,8};
  // vector<int>::iterator b = s.end();
  // cout <<*(s.end()-1);
  // set<int> s;
  // s.emplace(2);
  // s.emplace(5);
  // s.emplace(9);
  // s.emplace(3);
  // s.emplace(6);
  // set<int>::iterator itr;
  // for (itr = s.begin(); 
  //      itr != s.end(); itr++) 
  // {
  //   cout << *itr << " ";
  // }

  int a = 1;
  int c = ++a * 5 + a++;
  cout << c << " " << a;

  return 0;
}