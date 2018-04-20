#include <iostream>
using namespace std;

int main() {
  int L, D; //題目規定此兩個數為L和D
  cout << "請輸入今天的位置(L)\n";
  cin >> L;
  
  if (L > 0) {
    D = L*2 - 1;
  } else if (L < 0) {
    D = L * (-2);
  }
  
  cout << "D = " << D;
  
  return 0;
}
