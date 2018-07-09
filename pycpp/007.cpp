#include <iostream>
using namespace std;

int reverse(int x) {
    static const int INT_MAX_DIV_10 = 214748364;
    static const int INT_MAX_MOD_10 = 7;
    int is_neg = x < 0;
    if (is_neg) { x *= -1; }
    if (x < 0) { return 0; }    // INT_MIN * -1 == INT_MIN
    int y = 0;
    while (x > 9) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    // if (overflow) return 0
    if (x) {
        if (y > INT_MAX_DIV_10 || (y == INT_MAX_DIV_10 && x > INT_MAX_MOD_10)) { return 0; }
        y = y * 10 + x % 10;
    }
    if (is_neg) { y *= -1; }
    return y;
}

void test_reverse(int x) {
    cout << "reverse(" << x << ") is " << reverse(x) << endl;
}

int main () {
    // cout << sizeof(int) << endl;
    // test_reverse(2147483647);
    test_reverse(1463847412);
    test_reverse(-2147483648);
}
