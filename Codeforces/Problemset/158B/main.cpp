#include <iostream>

int main() {

    int n;
    int result = 0;
    int num;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        if (num == 1) {
            a += 1;
        } else if (num == 2) {
            b += 1;
        } else if (num == 3) {
            c += 1;
        } else if (num == 4) {
            d += 1;
        }
    }

    result += d;
    result += c;

    a -= c;

    result += (int) b/2;
    if (b % 2 == 1) {
        result += 1;
        a -= 2;
    }

    if (a < 0) {
        a = 0;
    } else {
        result += (int) (a + 3) / 4;
    }

    std::cout << result << std::endl;

    return 0;
}