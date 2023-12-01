////
//// Created by Святослав on 23.10.2023.
////
//
//#include <iostream>
//
//using namespace std;
//static int length = 0;
//
//void bubble (int *a, int n){
//  for (int i = 0; i < n; i++){
//    for (int j = 0; j < n-1; j++){
//      if (a[j] > a[j+1])
//        swap(a[j], a[j+1]);
//    }
//  }
//}
//
//struct node{
//  int x;
//  node * prev;
//  node * next;
//
//  node(int x) : x(x), prev(nullptr), next(nullptr){};
//};
//
//struct list_ {
//  node* first;
//  node* last;
//
//  list_() : first(nullptr), last(nullptr) {};
//
//  void push_back(int x) {
//    node* p = new node(x);
//    node* tmp = last;
//    if (is_empty()) {
//      first = p;
//      last = p;
//    } else {
//      last->next = p;
//      last = p;
//      last->prev = tmp;
//    }
//  }
//
//  int pop_last() {
//    int x = last->x;
//    last = last->prev;
//    last->next = nullptr;
//    return x;
//  }
//
//  int pop_first(){
//      first->next->prev = nullptr;
//      int x = first->x;
//      first = first->next;
//      return x;
//  }
//
//  bool is_empty() {
//    return first == nullptr;
//  }
//
//  void print(){
//    node *tmp = first;
//    while (tmp != nullptr){
//      cout << tmp->x << " ";
//      tmp = tmp->next;
//    }
//
//    cout << "\n";
//  }
//};
//
//int main(){
//  int n, tmp;
//  int a[3];
//  list_ l;
//  cin >> n >> tmp;
//
//  for (int i = 0; i < n; i++){
//    cin >> a[0];
//    length++;
//    if (length <= tmp)
//      l.push_back(a[0]);
//    else{
//      a[1] = l.pop_last();
//      a[2] = l.pop_first();
//      bubble(a, 3);
//      l.push_back(a[1]);
//      l.push_back(a[2]);
//    }
//  }
//  l.print();
//  return 0;
//}
