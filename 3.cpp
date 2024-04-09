#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sequence; // Вектор для хранения введенной последовательности чисел
    int element;

    std::cout << "Введите последовательность целых чисел, завершите ввод нулём:\n";

    // Ввод чисел в последовательность, завершение ввода при введении 0
    while (true) {
        std::cin >> element;

        if (element == 0) {
            break;
        }

        sequence.push_back(element);
    }

    if (sequence.empty()) {
        std::cout << "Последовательность пуста.\n";
        return 0;
    }

    double sum = 0;
    int maxVal = sequence[0];
    int minVal = sequence[0];
    int minIndex = 0;
    int negCount = 0;
    int evenCount = 0;
    int minEven;

    // Обход последовательности для нахождения необходимых значений
    for (size_t i = 0; i < sequence.size(); ++i) {
        sum += sequence[i]; // Подсчет суммы всех элементов

        if (sequence[i] > maxVal) {
            maxVal = sequence[i]; // Поиск максимального значения
        }

        if (sequence[i] < minVal) {
            minVal = sequence[i];
            minIndex = i; // Поиск минимального значения и его индекса
        }

        if (sequence[i] < 0) {
            negCount++; // Подсчет количества отрицательных элементов
        }

        if (sequence[i] % 2 == 0) {
            evenCount++; // Подсчет количества четных чисел

            if (evenCount == 1 || sequence[i] < minEven) {
                minEven = sequence[i]; // Нахождение минимального четного числа
            }
        }
    }

    double average = sum / sequence.size(); // Вычисление среднего арифметического

    // Вывод результатов на экран
    std::cout << "Среднее арифметическое: " << average << std::endl;
    std::cout << "Максимальное значение: " << maxVal << std::endl;
    std::cout << "Количество отрицательных элементов: " << negCount << std::endl;
    std::cout << "Номер минимального элемента: " << minIndex << std::endl;
    std::cout << "Количество четных чисел: " << evenCount << std::endl;
    if (evenCount == 0) {
        std::cout << "Минимальный четный элемент: Нет четных чисел в последовательности\n";
    } else {
        std::cout << "Минимальный из четных элементов: " << minEven << std::endl;
    }

    return 0;
}
