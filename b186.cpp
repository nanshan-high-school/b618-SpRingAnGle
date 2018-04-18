#include <iostream>
using namespace std;
void Free(int, int, int);

int main() {
  char origin[999999999];
  cout << "請輸入原始數目\n";
  cin >> origin;
  
  int originCookie, originChocolate, originCake;
  
  for () { //不知道怎麼取
    
  }
  
  Free(originCookie, originChocolate, originCake);
  
  return 0;
}
void Free(int originCookie, int originChocolate, int originCake) {
  int finalCookie = originCookie, finalChocolate, finalCake = originCake;
  
  if (originCookie % 10 == 0 || originCake % 2 == 0) {
    finalCake = originCake;
  } else if ((originCookie % 10) > (originCake % 2)) {
    finalCake = originCake + originCake%2;
  } else if ((originCookie % 10) < (originCake % 2)) {
    finalCake = originCake + originCookie%10;
  }
  
  cout << finalCookie << " " << finalChocolate << " " << finalCake;
  return;
}
