#include <iostream>
#include <vector>

auto main() -> int {
    // Prime numbers from 1 - 50
    uint64_t limit = 10001;
    std::vector<bool> is_prime(limit + 1, true);

    // Marking as non-prime
    is_prime[0] = false;
    is_prime[1] = false;

    for (uint64_t i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            for (uint64_t j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (uint64_t i = 0; i <= limit; i++) {
        if (is_prime[i]) {
            std::cout << i << ' ';
        }
    }

    std::cout << std::endl;
}
