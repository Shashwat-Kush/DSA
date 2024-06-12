#include <iostream>

int reverse_bits(int n) {
    int result = 0;
    while (n != 0) {
        result = (result << 1) | (n & 1); // Shift result left by 1 and add the last bit of n
        n >>= 1; // Right shift n by 1
    }
    return result;
}

int main() {
    int n = 5; // Example number to reverse its bits
    int sum = reverse_bits(n);
    std::cout << sum << std::endl;
    return 0;
}
