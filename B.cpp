//#include <iostream>
//
//using namespace std;
//
//struct node{
//  int x;
//  node * prev;
//
//  node(int x) : x(x), prev(nullptr){};
//};
//
//struct list_{
//  node * first;
//  node * last;
//
//  list_():first(nullptr), last(nullptr){};
//
//  void push_forward(int x) {
//    node *p = new node(x);
//    if (is_empty()){
//      first = p;
//      last = p;
//    }
//    else{
//      first->prev = p;
//      first = p;
//    }
//  }
//
//  void pop() {
//    cout << last->x << '\n';
//    if (last == first){
//      last = nullptr;
//      first = nullptr;
//    } else {
//      last = last->prev;
//    }
//
//  }
//
//  bool is_empty(){
//    return first == nullptr;
//  }
//
//};
//
//int main() {
////  ios_base::sync_with_stdio(false);
////  cin.tie(nullptr);
////  cout.tie(nullptr);
//  list_ l;
//  int n, x;
//  char ch;
//  cin >> n;
//
//  while (n > 0){
//    cin.get(ch);
//    if (ch == '+' || ch == '-'){
//      n--;
//      if (ch == '+'){
//        cin >> x;
//
//        l.push_forward(x);
//      }
//      if (ch == '-')
//        l.pop();
//    }
//  }
//  return 0;
//}
