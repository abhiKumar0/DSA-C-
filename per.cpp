#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        if (nums[0]==0 && n == 1)
            return 1;
        else if (nums[0] == 1 && n == 1)
            return 0;
        for (int i = 0; i< n; i++) {
            sum += nums[i];
            cout<<"sum "<<sum<<" i "<<nums[i]<<endl;
        }
        int gs = ((n+1)*n)/2;
        cout <<"gs "<<gs<<" sum "<<sum<<endl;
        return gs-sum;
    }

int main()
{
  // string s = "Abhishek";
  // sort(s.begin(), s.end());
  // map<int, string> mp;
  // mp[1] = "abhishek";
  // mp[2] = "kumar";
  // cout <<s<<endl;
  // cout<<mp[1]<<" "<<mp[2]<<endl;
  vector<int> arr = {9,6,4,2,3,5,7,0,1};
  cout<<missingNumber(arr)<<endl;
  // do
  // {
  //   cout <<s<<endl;
  // } while (next_permutation(s.begin(), s.end()));
  

  return 0;
}