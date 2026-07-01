#include <iostream>
#include <vector>

long long fibonacci(int n, std::vector<long long>& memo);

int main() {
    int n;

    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Номер числа не может быть отрицательным" << std::endl;
        return 0;
    }

    std::vector<long long> memo(n + 1, -1);

    std::cout << "Число Фибоначчи с номером " << n << ": " << fibonacci(n, memo) << std::endl;

    return 0;
}

long long fibonacci(int n, std::vector<long long>& memo) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}
