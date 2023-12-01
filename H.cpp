//#include <iostream>
//
//using namespace std;
//
//struct node{
//  long x;
//  node * prev;
//
//  node(long x) : x(x), prev(nullptr){};
//};
//
//struct list_{
//  node * first;
//  node * last;
//
//  list_():first(nullptr), last(nullptr){};
//
//  void push_back(long x) {
//    node *p = new node(x);
//    node *tmp = last;
//    if (is_empty()){
//      first = p;
//      last = p;
//    }
//    else{
//      last = p;
//      last -> prev = tmp;
//
//    }
//  }
//
//  void pop() {
//    if (first == last){
//      first = nullptr;
//      last = nullptr;
//    } else {
//      last = last->prev;
//    }
//  }
//
//  bool is_empty(){
//    return first == nullptr;
//  }
//
//};
//
//int main() {
//  list_ l;
//  long n, top, area = 0, area_top = 0;
//  cin >> n;
//  long *a = new long[n];
//
//  for (long i = 0; i < n; i++){
//    cin >> a[i];
//  }
//
//  long i = 0;
//  while (i < n){
//    if (l.is_empty() || a[l.last->x] <= a[i]){
//      l.push_back(i++);
//    }else{
//      top = l.last->x;
//      l.pop();
//
//      area_top = a[top] * (l.is_empty() ? i : i - l.last->x - 1);
//      area = max(area, area_top);
//    }
//  }
//
//  while (!l.is_empty()){
//    top = l.last->x;
//    l.pop();
//    area_top = a[top] * (l.is_empty() ? i : i - l.last->x - 1);
//    area = max(area, area_top);
//  }
//  cout << area;
//
//  return 0;
//}