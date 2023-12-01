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
//  void push_back(int x) {
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
//    cout << last->x << '\n';
//    last = last->prev;
//  }
//
//  bool is_empty(){
//    return first == nullptr;
//  }
//
//};
//
//int main() {
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//  cout.tie(nullptr);
//  list_ l;
//  int n, x;
//  char ch;
//
//  cin >> n;
//
//  while (n > 0){
//    cin.get(ch);
//    if (ch == '+' || ch == '-'){
//      n--;
//      if (ch == '+'){
//        cin >> x;
//        l.push_back(x);
//      }
//      if (ch == '-')
//        l.pop();
//    }
//  }
//  return 0;
//}