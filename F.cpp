//
//#include <iostream>
//
//using namespace std;
//
//struct node{
//  long x, day;
//  node * prev;
//
//  node(long x, long day) : x(x), day(day), prev(nullptr){};
//};
//
//struct list_{
//  node * first;
//  node * last;
//
//  list_():first(nullptr), last(nullptr){};
//
//  void push_back(long x, long day) {
//    node *p = new node(x, day);
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
//int main(){
//  int n;
//  list_ l;
//  cin >> n;
//  int *a = new int[n];
//  int *ans = new int[n];
//
//  for (int i = 0; i < n; i++){
//    cin >> a[i];
//    ans[i] = -1;
//  }
//
//
//  for (int i = 0; i < n; i++){
//    if (!l.is_empty()){
//      if (a[i] <= l.last->x){
//        l.push_back(a[i], i);
//      } else {
//        while (!l.is_empty()){
//          if (a[i] <= l.last->x)
//            break;
//          ans[l.last->day] = i - l.last->day;
//          l.pop();
//        }
//        l.push_back(a[i], i);
//      }
//    } else {
//      l.push_back(a[i], i);
//    }
//  }
//
//  while (!l.is_empty()){
//    ans[l.last->day] = -1;
//    l.pop();
//  }
//
//  for (int i = 0; i < n; i++){
//    cout << ans[i] << " ";
//  }
//}