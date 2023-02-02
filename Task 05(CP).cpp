#include <iostream>

int triangle(int n) {
    return n * (n + 1) / 2;
}

int main() {
    std::cout << triangle(1) << std::endl; // 1
    std::cout << triangle(6) << std::endl; // 21
    return 0;
}
