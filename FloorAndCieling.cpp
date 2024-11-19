#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int, int> p;
	int start = 0; int end = n-1;
	int floor; int ceiling; int mid;
	for (int i = start; i < end; i++) {
		mid = (start+end)/2;
		if (a[mid] == x) {
			break;
		} else if (a[mid] >= x) {
			end = mid;
			cout << end << endl;
			ceiling = end;
		} else if (a[mid] < x){
			start = mid;
			cout << start << endl;
			floor = start;
		}
	}
	cout << floor << ceiling << endl;
	p.first = a[floor];
	p.second = a[ceiling];
	return p;
}

int main()
{
    vector<int> arr = {3, 4, 7, 8, 8, 10}; 
    int n = 6; int x = 8;
    pair<int, int> result = getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << ", Ceiling: " << result.second << endl;
    return 0;
}