#include <iostream>
#include <vector>
using namespace std;

void pv(vector<int> &v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            v.push_back(nums1[i]);
            i++;
        }
        pv(v);
        if (nums1[i] >= nums2[j]) {
            v.push_back(nums2[j]);
            j++;
        }
        pv(v);

    };
    while (i <= m-1){
        v.push_back(nums1[i]);
        i++;
    }
    while (j <= n-1){
        v.push_back(nums2[j]);
        j++;
    }
    cout << "pv" << endl;
    pv(v);
    int ns = v.size();
    for (int i = 0; i < ns; i++) {
        nums1[i] = v[i];
    }
    pv(nums1);
}


void mergeEfficiently(vector<int>& v, int a, vector<int>& u, int b) {
    int n = a+b;
    int i = a-1;
    int j = b-1;
    while (i >= 0 && j >= 0) {
        if (v[i] >= u[j]) {
            v[n-1] = v[i];
            i--;
        } else {
            v[n-1] = u[j];
            j--;
        }
        n--;
    }
    while (j >= 0) {
        v[n-1] = u[j];
        j--;
        n--;
    }
}


int main() {

  vector<int> nums1 = {9,8, 7, 0,0,0};
  vector<int> nums2 = {2, 5, 6};
  int m = 3;
  int n = 3;
  mergeEfficiently(nums1, m, nums2, n);
  pv(nums1);
}