#include <iostream>
using namespace std;
int length(int);

int main()
{
    int n;
    cout << "請輸入一個>=45的整數\n";
    cin >> n;
    
    if (n >= 1) {
        cout << length(n);
    }
    
    return 0;
}
int length(int n) {
    int limit = 1, length;
    
    for (int num1 =1, num2 = 1; limit <= n;  limit++) {
        num1 = num1 + num2;
        length = num1 - num2;
    }
    
    return length;
}