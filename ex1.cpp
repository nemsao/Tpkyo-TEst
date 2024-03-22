#include <iostream>

int count_ratios(int x, int y) {
    int count = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            if (i * y == j * x) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int N;
    std::cin >> N;
    std::cout<<std::endl;
    int test_cases[N][2];
    for (int i = 0; i < N; i++) {
        std::cin >> test_cases[i][0] >> test_cases[i][1];
    }
    for (int i = 0; i < N; i++) {
        int result = count_ratios(test_cases[i][0], test_cases[i][1]);
        std::cout << result << std::endl;
    }
    return 0;
}