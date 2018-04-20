#include <iostream>
using namespace std;
int length(int);

int main() {
  int n;
  cout << "請輸入一個>=45的整數\n";
  cin >> n;
  
  cout << length(n);
  
  return 0;
}
int length(int n) {
  int limit = 1, length;
  
  for (int num1 = 1, num2 = 1; limit <= n;  limit++) {
      num1 = num1 + num2;
      num2 = num1 - num2;
      length = num2;
  }
  
  return length;
}
