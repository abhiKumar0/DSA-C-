#include <iostream>
#include <vector>
using namespace std;



void pv(vector<int> &v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    int num = 0;
    int i = 0;
    int rem;
    vector<int> v;
    digits[n - 1]++;
    return digits;
}

void reverse(vector<int> &nums, int start, int end) {
    int i = end;
    int j = start;
    while (i>j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i--;
        j++;
    }
}

void nextPer(vector<int> &nums) {
    int pivot = -1;
    int n = nums.size();
    for(int i = n-2; i>=0; i--) {
        if (nums[i] < nums[n+1]){
            pivot = i;
            break;
        }
    }
    for (int i = n-1; i>=0; i--) {
        if (nums[i] > nums[pivot]) {
            int temp = nums[pivot];
            nums[pivot] = nums[i];
            nums[i] = temp;
            break;
        }
    }
    reverse(nums, pivot+1, n-1);
    
}

int main()
{
    vector<int> nums = {3, 2, 1};
    nextPer(nums);
    pv(nums);

    return 0;
}


/*
    First step is to find the pivot the number which is not in the increasing manner in reverse way 
    Find the right most number and swap those numbers
    Then reverse the right part of the array to get the next permutation.

*/