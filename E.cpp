////
//// Created by Святослав on 25.10.2023.
////
//
//
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
//  int pop() {
//    int y;
//    if (first == last){
//      return last->x;
//      first = nullptr;
//      last = nullptr;
//    } else {
//      y = last->x;
//      last = last->prev;
//    }
//    return y;
//  }
//
//  bool is_empty(){
//    return first == nullptr;
//  }
//
//};
//
//int main(){
//  ios_base::sync_with_stdio(0);
//  cin.tie(0);
//  list_ l;
//  int mul = 1, div;
//  int ans[26] = {0};
//  string s;
//  cin >> s;
//
//  int n = size(s)-1;
//  int i = n, num = 0;
//  while (i >= 0){
//    num = 0;
//    if ('0' <= s[i] && s[i] <= '9'){
//      int pow = 1;
//      while ('0' <= s[i] && s[i] <= '9'){
//        int tmp = (s[i]- '0') * pow;
//        num += tmp;
//        pow *= 10;
//        i--;
//      }
//    }
//    if (s[i] == ')'){
//      if (num == 0)
//        num = 1;
//      l.push_back(num);
//      mul *= (num);
//    }
//    if (s[i] == '('){
//      div = l.pop();
//      mul /= div;
//    }
//
//    if ('A' <= s[i] && s[i] <= 'Z'){
//      num  = (num == 0) ? 1 : num;
//      if (i+1 <= n){
//        ans[int(s[i]) - 65] += (num * mul);
//      }
//      else
//        ans[int(s[i]) - 65]++;
//    }
//    i--;
//  }
//  for (int j = 0; j < 26; j++){
//    if (ans[j] != 0){
//      if (ans[j] == 1){
//        cout << char(65 + j);
//      } else {
//        cout << char(65 + j) << ans[j];
//      }
//    }
//  }
//}