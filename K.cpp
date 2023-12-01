//
// Created by Святослав on 31.10.2023.
//


#include <iostream>

using namespace std;

struct node {
  node* next;
  node() : next(nullptr) {}

};
node* loopfind(node** a) {
  node* fast = a[0];
  node* slow = a[0];

  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;

    if (fast == slow)
      return fast;
  }
  return nullptr;
}
int looplen(node* meet) {
  node* fast = meet->next;
  node* slow = meet;


  int steps = 1;

  while (fast != slow) {
    fast = fast->next;
    ++steps;
  }

  return steps;
}


int main() {

  int n, x = 0, x1, ans;
  cin >> n;
  node** a = new node*[n];
  for (int i = 0; i < n; i++)
    a[i] = new node();

  while (cin >> x1)
    a[x++]->next = a[x1 - 1];

  node * meet = loopfind(a);
  if (!meet){
    cout << -1;
    return 0;
  }

  ans = looplen(loopfind(a));
  cout << ans;
}

