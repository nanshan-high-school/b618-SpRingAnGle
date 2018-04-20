#include <iostream>
using namespace std;
void Free(int, int, int);

int main() {
  int origin[3];
  cout << "請輸入原始數目(中間各隔一隔空格)\n";
  for (int i = 0; i < 3; i++) {
    cin >> origin[i];
  }
  
  int originCookie = origin[0], originChocolate = origin[1], originCake = origin[2];
  Free(originCookie, originChocolate, originCake);
  
  return 0;
}
void Free(int originCookie, int originChocolate, int originCake) {
  int finalCookie = originCookie, finalChocolate, finalCake = originCake;
  
  if (originCookie / 10 == 0 || originCake / 2 == 0) {
    finalChocolate = originChocolate;
  } else if ((originCookie / 10) > (originCake / 2)) {
    finalChocolate = originChocolate + originCake/2;
  } else if ((originCookie / 10) < (originCake / 2)) {
    finalChocolate = originChocolate + originCookie/10;
  }
  
  cout << finalCookie << " " << finalChocolate << " " << finalCake;
  return;
}
