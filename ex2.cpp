#include <iostream>

int main() {
    int m, d, k, c;
    std::cin >> m >> d >> k >> c;

    int repairs_needed = (m + k - 1) / k;
    int repairs_required = (repairs_needed + d - 1) / d;

    if (repairs_required > d) {
        std::cout << -1 << std::endl;
    } else {
        int gold_needed = repairs_required * c;
        std::cout << gold_needed << std::endl;
    }

    return 0;
}