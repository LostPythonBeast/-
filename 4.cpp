#include <iostream>
#include <vector>

int fibonacciSum(int Q) {
    std::vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);

    int i = 1;
    int sum = 1; // Инициализируем сумму чисел Фибоначчи
    while (fibonacci[i] + fibonacci[i - 1] < Q) {
        int nextFibonacci = fibonacci[i] + fibonacci[i - 1];
        fibonacci.push_back(nextFibonacci);
        sum += nextFibonacci; // Добавляем текущее число Фибоначчи к сумме
        i++;
    }

    return sum; // Возвращаем итоговую сумму
}

int main() {
    int Q;
    std::cout << "vvedite Q: ";
    std::cin >> Q;

    int sum = fibonacciSum(Q);

    std::cout << "summa chisel fibonachi menshix " << Q << ": " << sum << std::endl;

    return 0;
}
