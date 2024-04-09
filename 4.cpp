#include <iostream>
#include <vector>

void fibonacciSequence(int Q) {
    std::vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);

    int i = 1;
    while (fibonacci[i] + fibonacci[i-1] < Q) {
        fibonacci.push_back(fibonacci[i] + fibonacci[i-1]);
        i++;
    }

    std::cout << "Последовательность чисел Фибоначчи меньше " << Q << ":" << std::endl;
    for (int num : fibonacci) {
        std::cout << num << " ";
    }
}

int main() {
    int Q;
    std::cout << "Введите число Q: ";
    std::cin >> Q;

    fibonacciSequence(Q);

    return 0;
}
