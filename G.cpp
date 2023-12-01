////
//// Created by Святослав on 23.10.2023.
////
//
//#include <iostream>
//
//using namespace std;
//
//bool check(int x, int k, int n, int * cords) {
//  int cows = 1;
//  int last_cow = cords[0];
//
//  for (int i = 0; i < n; i++) {
//    if (cords[i] - last_cow >= x) {
//      cows++;
//      last_cow = cords[i];
//      if (cows >= k)
//        return true;
//    }
//  }
//  return cows >= k;
//}
//
//int main(){
//  int n, k, l = 0, r, mid;
//  cin >> n >> k;
//  int *cords = new int[n];
//
//  for (int i = 0; i < n; i++)
//    cin >> cords[i];
//
//  r = cords[n-1] - cords[0] + 1;
//
//  while (r - l > 1) {
//    mid = (l + r) / 2;
//    if (check(mid, k, n, cords)) {
//      l = mid;
//    } else {
//      r = mid;
//    }
//  }
//
//  cout << l;
//}