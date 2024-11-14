#include <iostream>
#include <vector>
using namespace std;

void pa(vector<int> &a){
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;
}

void bubbleSort(vector<int> &v) {
  int n = v.size();
  int temp;
  for (int i = 0; i < n-1; i++){
    for(int j = 0; j < n-i-1; j++) {
      if (v[j] > v[j+1]){
        temp = v[j+1];
        v[j+1] = v[j];
        v[j] = temp;
      }
    }
  }
}

void insertionSort(vector<int> &v) {
  int n = v.size();
  int key, temp;
  for (int i = 1; i < n; i++) {
    key = v[i];
    int j = i-1;
    while (j >= 0 && v[j] > key) {
      temp = v[j];
      v[j] = v[j+1];
      v[j+1] = temp;
      j--;
    }
    temp = key;
    key = v[j+1];
    v[j+1] = temp;
  }
}


void selectionSort(vector<int> &v) {
  int n = v.size();
  int indexOfMin, temp;
  for (int i = 0; i < n-1; i++){
    indexOfMin = i;
    for (int j = i+1; j < n; j++) {
      if (v[indexOfMin] > v[j]) {
        indexOfMin = j;

      }
    }
    temp = v[i];
    v[i] = v[indexOfMin];
    v[indexOfMin] = temp;
  }

}

int main() {
  vector<int> nums = {5, 6, 2, 4, 9, 1, 3};
  // bubbleSort(nums);
  // insertionSort(nums);
  selectionSort(nums);
  pa(nums);
}