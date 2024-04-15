#include <iostream>
#include <vector>
#include <cmath>

struct Point {
    double x, y;
};

double distance(const Point& a, const Point& b) {
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double polygonArea(const std::vector<Point>& points) {
    double area = 0.0;
    int j = points.size() - 1;
    for (int i = 0; i < points.size(); i++) {
        area += (points[j].x + points[i].x) * (points[j].y - points[i].y);
        j = i;
    }
    return std::abs(area / 2.0);
}

int main() {
    int N;
    std::cout << "Введите количество вершин многоугольника: ";
    std::cin >> N;

    std::vector<Point> points(N);
    for (int i = 0; i < N; ++i) {
        std::cout << "Введите координаты x и y для вершины " << i + 1 << ": ";
        std::cin >> points[i].x >> points[i].y;
    }

    double perimeter = 0.0;
    for (int i = 0; i < N; ++i) {
        double sideLength = distance(points[i], points[(i + 1) % N]);
        std::cout << "Длина стороны " << i + 1 << ": " << sideLength << std::endl;
        perimeter += sideLength;
    }

    std::cout << "Периметр многоугольника: " << perimeter << std::endl;
    std::cout << "Площадь многоугольника: " << polygonArea(points) << std::endl;

    return 0;
}
