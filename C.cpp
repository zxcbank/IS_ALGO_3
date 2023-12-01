//#include <iostream>
//
//using namespace std;
//
//void bubble_sort(char **a, int n, int iter){
//  for (int i = 0; i < n; i++){
//    for (int j = 0; j < n-1; j++){
//      if (a[j][iter] > a[j+1][iter]){
//        swap(a[j], a[j+1]);
//      }
//    }
//  }
//}
//
//int main(){
//  int n, k, t;
//  cin >> n >> k >> t;
//  char ch;
//  char ** a = new char*[n];
//
//  for (int i = 0; i < n; i++)
//    a[i] = new char[k];
//  //------------------ ввод данных
//  for (int i = 0; i < n; i++){
//    int j = 0;
//
//    while (j < k){
//      cin.get(ch);
//      if (ch != '\n'){
//        a[i][j++] = ch;
//      }
//    }
//  }
//  //--------------------
//
//  for (int iter = k-1; iter >= k-t; iter--)
//    bubble_sort(a, n, iter);
//
//  for (int i = 0; i < n; i++){
//    for (int j = 0; j < k; j++)
//      cout << a[i][j];
//    cout << "\n";
//  }
//}
