#include <iostream>
using namespace std;

struct ListNode {
  int val;
  struct ListNode *next;
};

void tr(ListNode *r) {
  while (r!=NULL) {
    cout << r->val << " ";
    r = r->next;
  }
  cout << endl;
}

ListNode *merge(ListNode *list1, ListNode *list2){
  if (list1 == NULL) return list2;
  if (list2 == NULL) return list1;
  ListNode *l;
  l = NULL;
  while (list1 != NULL && list2 != NULL) {
  
    if (list1->val < list2->val) {
      l = list1;
      l->next = NULL;
      list1 = list1->next;
    } else {
      l = list2;
      l->next = NULL;
      list2 = list2->next;
    }
  }
  return l;
}



int main()
{
  // list1 = [1,2,4], list2 = [1,3,4]
  ListNode *list1a;
  ListNode *list2a;
  ListNode *list1b;
  ListNode *list2b;
  ListNode *list1c;
  ListNode *list2c;

  list1a->val = 1;
  list1a->next = list1b;

  list1b->val = 2;
  list1b->next = list1b;

  list1a->val = 4;
  list1a->next = NULL;

// LIST 2
  list2a->val = 1;
  list2a->next = list2b;

  list2b->val = 3;
  list2b->next = list2b;

  list2a->val = 4;
  list2a->next = NULL;

ListNode *list;
list = merge(list1a, list1b);
tr(list1a);
cout <<" s[dfsa]" << list->val << endl;
// tr(list2a);
// tr(list);

  return 0;
}