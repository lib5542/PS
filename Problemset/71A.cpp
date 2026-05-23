#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string s;

    while (n--) {
        std::cin >> s;

        if (s.length() <= 10) {
            std::cout << s << std::endl;
        } else {
            std::cout << s[0] << s.length()-2 << s[s.length()-1] << std::endl;
        }

    }

    return 0;
}