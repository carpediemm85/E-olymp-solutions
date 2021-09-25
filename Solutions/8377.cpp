#include <iostream>
using namespace std;
 
int p(int x) {
    int t = 1;
    while (x != 0) {
        t *= x % 10;
        x = x / 10;
    }
    return t;
}
 
int main() {
    int x;
    while (cin >> x) {
        int i = 0;
        while (x / 10 != 0) {
            x = p(x);
            i++;
        }
        cout << i << endl;
    }
    return 0;
}